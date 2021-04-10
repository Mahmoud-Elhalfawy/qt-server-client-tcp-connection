#-------------------------------------------------
#
# Project created by QtCreator 2014-06-22T13:22:02
#
#-------------------------------------------------

QT       += core gui

QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HelloWorldServer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    helloworldserver.cpp

HEADERS  += mainwindow.h \
    helloworldserver.h

FORMS    += mainwindow.ui
