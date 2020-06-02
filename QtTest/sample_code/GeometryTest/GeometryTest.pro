#-------------------------------------------------
#
# Project created by QtCreator 2010-10-21T17:06:07
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = maintest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += maintest.cpp \
    squaretest.cpp \
    circletest.cpp \
    \
    ../Geometry/square.cpp \
    ../Geometry/circle.cpp

HEADERS += \
    squaretest.h \
    circletest.h \
    \
    ../Geometry/square.h \
    ../Geometry/circle.h

DEFINES += SRCDIR=\\\"$$PWD/\\\"
