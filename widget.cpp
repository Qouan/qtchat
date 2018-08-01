#include "widget.h"
#include "ui_widget.h"
#include<QUdpSocket>
#include<QHostInfo>
#include<QMessageBox>
#include<QScrollBar>
#include<QDateTime>
#include<QNetworkInterface>
#include<QProcess>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    udpSocket=new QUdpSocket(this);
    port=45454;
    udpSocket->bind(port,QUdpSocket::ShareAddress|QUdpSocket::ReuseAddressHint);
    connect(udpSocket,SIGNAL(readyRead()),this,SLOT(processPendingDatagrams()));
    sendMessage(NewParticipant);
}

//发消息
void Widget::sendMessage(MessageType type, QString serverAddress)
{
    QByteArray data;
    QDataStream out(&data,QIODevice::WriteOnly);
    QString localHostMame=QHostInfo::localHostName();
    QString adress=getIp();
    out<<type<<getUsername()<<localHostMame;

    switch (type) {
    case Message:
        if(ui->messageTextedit->toPlainText()==""){
            QMessageBox::warning(0,tr("警告"),tr("发送内容不能为空"),QMessageBox::Ok);
            return ;
        }
        out<<adress<<getMessage();
        ui->messageBrower->verticalScrollBar()
                ->setValue(ui->messageBrower->verticalScrollBar()->maximum());
        break;

    case NewParticipant:
        out<<adress;
        break;

    case ParticipantLeft:
        break;

    case FileName:
        break;

    case Refuse:
        break;
    }
    udpSocket->writeDatagram(data,data.length(),QHostAddress::Broadcast,port);
}

//接收消息
void Widget::processPendingDatagrams()
{
    while(udpSocket->hasPendingDatagrams())
    {
        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());
        udpSocket->readDatagram(datagram.data(),datagram.size());
        QDataStream in(&datagram,QIODevice::ReadOnly);
        int messageType;
        in>>messageType;
        QString userName,localHostName,ipAdress,message;
        QString time=QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
        switch (messageType) {
        case Message:
            in>>userName>>localHostName>>ipAdress>>message;
            ui->messageBrower->setTextColor(Qt::blue);
            ui->messageBrower->setCurrentFont(QFont("Times New Roman",12));
            ui->messageBrower->append("["+userName +"]"+time);
            ui->messageBrower->append(message);
            break;

        case NewParticipant:
            in>>userName>>localHostName>>ipAdress;
            newParticipant(userName,localHostName,ipAdress);
            break;

        case ParticipantLeft:
            in>>userName>>localHostName;
            participantLeft(userName,localHostName,time);
            break;

        case FileName:
            break;

        case Refuse :
            break;
        }
    }
}

//新用户加入
/*先用主机名判断该用户是否已经加入带列表中,如果没有就添加信息*/
void Widget::newParticipant(QString username, QString localHostName, QString ipAdress)
{
    bool isEmpty=ui->userTableWidget
            ->findItems(localHostName,Qt::MatchExactly).isEmpty();
    if(isEmpty){
        QTableWidgetItem *user=new QTableWidgetItem(username);
        QTableWidgetItem *host=new QTableWidgetItem(localHostName);
        QTableWidgetItem *ip=new QTableWidgetItem(ipAdress);

        ui->userTableWidget->insertRow(0);
        ui->userTableWidget->setItem(0,0,user);
        ui->userTableWidget->setItem(0,1,host);
        ui->userTableWidget->setItem(0,2,ip);

        ui->messageBrower->setTextColor(Qt::gray);
        ui->messageBrower->setCurrentFont(QFont("Times new Roman",10));
        ui->messageBrower->append(tr("%1在线").arg(username));
        ui->messageBrower->setText(tr("在线人数:%1")
                                   .arg(ui->userTableWidget->rowCount()));
        sendMessage(NewParticipant);
    }
}

//用户离开
void Widget::participantLeft(QString username, QString localHostName, QString time)
{
    int rowNum=ui->userTableWidget->findItems(localHostName,
                                              Qt::MatchExactly).first()->row();
    ui->userTableWidget->removeRow(rowNum);
    ui->messageBrower->setTextColor(Qt::gray);
    ui->messageBrower->setCurrentFont(QFont("Times New Roman",10));
    ui->messageBrower->append(tr("%1 于 %2 离开").arg(username).arg(time));
    ui->userNUmLabel->setText(tr("在线人数:%1")
            .arg(ui->userTableWidget->rowCount()));
}

//获取ip地址
QString Widget::getIp()
{
    QList<QHostAddress> list=QNetworkInterface::allAddresses();
    foreach (QHostAddress address, list) {
       if(address.protocol()==QAbstractSocket::IPv4Protocol)
           return address.toString();
    }
    return 0;
}

//获取用户名
QString Widget::getUsername()
{
    QStringList envVariables;
    envVariables<<"USERNAME.*"<<"USER.*"<<"USERDOMAIN.*"
               <<"HOSTNAME.*"<<"DOMAINNAME.*";
    QStringList environment=QProcess::systemEnvironment();
    foreach (QString string, envVariables) {
       int index=environment.indexOf(QRegExp(string));
       if(index!=-1)
       {
           QStringList stringList=environment.at(index).split('=');
           if(stringList.size()==2){
               return stringList.at(1);
               break;
           }
       }
    }
    return "unknown";
}

//获取信息
QString Widget::getMessage()
{
    QString msg=ui->messageTextedit->toHtml();
    ui->messageTextedit->clear();
    ui->messageTextedit->setFocus();
    return msg;
}

Widget::~Widget()
{
    delete ui;
}















void Widget::on_sendButton_clicked()
{
    sendMessage(Message);
}
