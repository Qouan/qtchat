/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTextBrowser *messageBrower;
    QFontComboBox *fontComboBox;
    QToolButton *boldToolBtn;
    QComboBox *sizeComboBox;
    QToolButton *italicToolBtn;
    QToolButton *underlineToolBtn;
    QToolButton *colorBtn;
    QToolButton *sendBtn;
    QToolButton *saveBtn;
    QToolButton *clearbtn;
    QTextEdit *messageTextedit;
    QTableWidget *userTableWidget;
    QPushButton *sendButton;
    QPushButton *exitButton;
    QLabel *userNUmLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->setWindowModality(Qt::WindowModal);
        Widget->setEnabled(true);
        Widget->resize(800, 492);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../\346\226\260\345\273\272\346\226\207\344\273\266\345\244\271 (2)/Z4W@2YB]O]7J15RWMOZN[11.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        messageBrower = new QTextBrowser(Widget);
        messageBrower->setObjectName(QStringLiteral("messageBrower"));
        messageBrower->setGeometry(QRect(0, 0, 511, 271));
        fontComboBox = new QFontComboBox(Widget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(10, 280, 161, 27));
        boldToolBtn = new QToolButton(Widget);
        boldToolBtn->setObjectName(QStringLiteral("boldToolBtn"));
        boldToolBtn->setGeometry(QRect(250, 280, 30, 30));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        boldToolBtn->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../\346\226\260\345\273\272\346\226\207\344\273\266\345\244\271 (2)/b123.png"), QSize(), QIcon::Normal, QIcon::Off);
        boldToolBtn->setIcon(icon1);
        boldToolBtn->setIconSize(QSize(22, 22));
        boldToolBtn->setCheckable(true);
        boldToolBtn->setAutoRaise(true);
        sizeComboBox = new QComboBox(Widget);
        sizeComboBox->setObjectName(QStringLiteral("sizeComboBox"));
        sizeComboBox->setGeometry(QRect(180, 280, 69, 25));
        sizeComboBox->setIconSize(QSize(22, 16));
        italicToolBtn = new QToolButton(Widget);
        italicToolBtn->setObjectName(QStringLiteral("italicToolBtn"));
        italicToolBtn->setGeometry(QRect(290, 280, 30, 30));
        italicToolBtn->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../\346\226\260\345\273\272\346\226\207\344\273\266\345\244\271 (2)/@K2N`R]S_}9}GMT`I97)Z{E.png"), QSize(), QIcon::Normal, QIcon::Off);
        italicToolBtn->setIcon(icon2);
        italicToolBtn->setIconSize(QSize(22, 22));
        italicToolBtn->setCheckable(true);
        italicToolBtn->setAutoRaise(true);
        underlineToolBtn = new QToolButton(Widget);
        underlineToolBtn->setObjectName(QStringLiteral("underlineToolBtn"));
        underlineToolBtn->setGeometry(QRect(330, 280, 30, 30));
        underlineToolBtn->setFont(font);
        underlineToolBtn->setIcon(icon);
        underlineToolBtn->setIconSize(QSize(22, 22));
        underlineToolBtn->setCheckable(true);
        underlineToolBtn->setAutoRaise(true);
        colorBtn = new QToolButton(Widget);
        colorBtn->setObjectName(QStringLiteral("colorBtn"));
        colorBtn->setGeometry(QRect(370, 280, 30, 30));
        colorBtn->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../\346\226\260\345\273\272\346\226\207\344\273\266\345\244\271 (2)/HYZ$G%7V@SA)8FM`]}D7}{I.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorBtn->setIcon(icon3);
        colorBtn->setIconSize(QSize(22, 22));
        sendBtn = new QToolButton(Widget);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(410, 280, 30, 30));
        sendBtn->setFont(font);
        sendBtn->setIcon(icon);
        sendBtn->setIconSize(QSize(22, 22));
        saveBtn = new QToolButton(Widget);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));
        saveBtn->setGeometry(QRect(450, 280, 30, 30));
        saveBtn->setFont(font);
        saveBtn->setIcon(icon1);
        saveBtn->setIconSize(QSize(22, 22));
        clearbtn = new QToolButton(Widget);
        clearbtn->setObjectName(QStringLiteral("clearbtn"));
        clearbtn->setGeometry(QRect(490, 280, 30, 30));
        clearbtn->setFont(font);
        clearbtn->setIcon(icon2);
        clearbtn->setIconSize(QSize(22, 22));
        messageTextedit = new QTextEdit(Widget);
        messageTextedit->setObjectName(QStringLiteral("messageTextedit"));
        messageTextedit->setGeometry(QRect(0, 310, 521, 141));
        userTableWidget = new QTableWidget(Widget);
        if (userTableWidget->columnCount() < 3)
            userTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        userTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        userTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        userTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        userTableWidget->setObjectName(QStringLiteral("userTableWidget"));
        userTableWidget->setGeometry(QRect(520, 0, 321, 451));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userTableWidget->sizePolicy().hasHeightForWidth());
        userTableWidget->setSizePolicy(sizePolicy);
        userTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        userTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        userTableWidget->setShowGrid(false);
        sendButton = new QPushButton(Widget);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(10, 460, 75, 23));
        exitButton = new QPushButton(Widget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(690, 460, 75, 23));
        userNUmLabel = new QLabel(Widget);
        userNUmLabel->setObjectName(QStringLiteral("userNUmLabel"));
        userNUmLabel->setGeometry(QRect(370, 462, 54, 20));

        retranslateUi(Widget);

        sizeComboBox->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\345\261\200\345\237\237\347\275\221\350\201\212\345\244\251\345\267\245\345\205\267", 0));
#ifndef QT_NO_TOOLTIP
        boldToolBtn->setToolTip(QApplication::translate("Widget", "<html><head/><body><p>\345\212\240\347\262\227</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        boldToolBtn->setText(QApplication::translate("Widget", "...", 0));
        sizeComboBox->clear();
        sizeComboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "9", 0)
         << QApplication::translate("Widget", "10", 0)
         << QApplication::translate("Widget", "11", 0)
         << QApplication::translate("Widget", "12", 0)
         << QApplication::translate("Widget", "13", 0)
         << QApplication::translate("Widget", "14", 0)
         << QApplication::translate("Widget", "15", 0)
         << QApplication::translate("Widget", "20", 0)
         << QApplication::translate("Widget", "16", 0)
         << QApplication::translate("Widget", "17", 0)
         << QApplication::translate("Widget", "18", 0)
         << QApplication::translate("Widget", "19", 0)
         << QApplication::translate("Widget", "21", 0)
         << QApplication::translate("Widget", "22", 0)
         << QApplication::translate("Widget", "23", 0)
        );
#ifndef QT_NO_TOOLTIP
        italicToolBtn->setToolTip(QApplication::translate("Widget", "<html><head/><body><p>\345\200\276\346\226\234</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        italicToolBtn->setText(QApplication::translate("Widget", "...", 0));
#ifndef QT_NO_TOOLTIP
        underlineToolBtn->setToolTip(QApplication::translate("Widget", "<html><head/><body><p><span style=\" text-decoration: underline;\">\344\270\213\345\210\222\347\272\277</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        underlineToolBtn->setText(QApplication::translate("Widget", "...", 0));
#ifndef QT_NO_TOOLTIP
        colorBtn->setToolTip(QApplication::translate("Widget", "<html><head/><body><p>\346\233\264\346\224\271\345\255\227\344\275\223\351\242\234\350\211\262</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        colorBtn->setText(QApplication::translate("Widget", "...", 0));
#ifndef QT_NO_TOOLTIP
        sendBtn->setToolTip(QApplication::translate("Widget", "<html><head/><body><p>\344\274\240\350\276\223\346\226\207\344\273\266</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        sendBtn->setText(QApplication::translate("Widget", "...", 0));
#ifndef QT_NO_TOOLTIP
        saveBtn->setToolTip(QApplication::translate("Widget", "<html><head/><body><p>\344\277\235\345\255\230\350\201\212\345\244\251\350\256\260\345\275\225</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        saveBtn->setText(QApplication::translate("Widget", "...", 0));
#ifndef QT_NO_TOOLTIP
        clearbtn->setToolTip(QApplication::translate("Widget", "<html><head/><body><p>\346\270\205\347\251\272\350\201\212\345\244\251\350\256\260\345\275\225</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        clearbtn->setText(QApplication::translate("Widget", "...", 0));
        QTableWidgetItem *___qtablewidgetitem = userTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem1 = userTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "\344\270\273\346\234\272\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem2 = userTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget", "IP\345\234\260\345\235\200", 0));
        sendButton->setText(QApplication::translate("Widget", "PushButton", 0));
        exitButton->setText(QApplication::translate("Widget", "PushButton", 0));
        userNUmLabel->setText(QApplication::translate("Widget", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
