#-------------------------------------------------
#
# Project created by QtCreator 2018-07-25T22:31:54
#
#-------------------------------------------------

QT       += core gui
QT       += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtchat
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    tcpserver.cpp

HEADERS  += widget.h \
    tcpserver.h

FORMS    += widget.ui \
    tcpserver.ui


