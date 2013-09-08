#-------------------------------------------------
#
# Project created by QtCreator 2013-08-18T14:47:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = town
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    person.cpp \
    currenttime.cpp \
    engine1.cpp

HEADERS  += mainwindow.h \
    person.h \
    currenttime.h \
    engine1.h \
    stdafx.h

FORMS    += mainwindow.ui
