#-------------------------------------------------
#
# Project created by QtCreator 2017-12-02T13:56:06
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QNetworkManager
TEMPLATE = app


DEFINES += QT_DEPRECATED_WARNINGS


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    networkclass.cpp

HEADERS += \
        mainwindow.h \
    networkclass.h

FORMS += \
        mainwindow.ui
