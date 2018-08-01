#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
class QUdpSocket;

namespace Ui {
class Widget;
}


//枚举变量标志信息类型,分别为消息,新用户的加入,用户退出,文件名,拒绝接受文件
enum MessageType{Message,NewParticipant,ParticipantLeft,FileName,Refuse};

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

protected:
    void newParticipant(QString username,QString localHostName,QString ipAdress);
    void participantLeft(QString username,QString localHostName,QString time);
    void sendMessage(MessageType type,QString serverAddress="");

    QString getIp();
    QString getUsername();
    QString getMessage();

private:
    Ui::Widget *ui;
    QUdpSocket *udpSocket;
    qint16 port;

private slots:
    void processPendingDatagrams();
    void on_sendButton_clicked();
    void on_fontComboBox_currentIndexChanged(const QString &arg1);
    void on_fontComboBox_currentTextChanged(const QString &arg1);
    void on_fontComboBox_activated(const QString &arg1);
};

#endif // WIDGET_H
