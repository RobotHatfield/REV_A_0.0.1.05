#-------------------------------------------------
#
# Project created by QtCreator 2015-01-19T22:19:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SUClientApp
TEMPLATE = app


SOURCES += main.cpp \

HEADERS  += \

OTHER_FILES += \
    Dataflow.Gui.pri \
    Dataflow.Core.pri

include("Dataflow.Core.pri")
include("Dataflow.Gui.pri")
