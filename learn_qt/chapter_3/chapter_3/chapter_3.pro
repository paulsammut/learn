TEMPLATE = app
TARGET = chapter3

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    notepad.cpp

HEADERS += \
    notepad.h

