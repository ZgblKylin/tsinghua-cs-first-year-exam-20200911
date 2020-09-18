QT          += core gui widgets
CONFIG      += c++11
TEMPLATE    = app
TARGET      = SquareMaster-v1
DESTDIR     = $$PWD/bin

HEADERS += \
    $$PWD/src/mainwindow.h \
    $$PWD/src/canvas.h

SOURCES += \
    $$PWD/src/main.cpp \
    $$PWD/src/mainwindow.cpp \
    $$PWD/src/canvas.cpp

FORMS += \
    $$PWD/src/mainwindow.ui \
    $$PWD/src/canvas.ui

DISTFILES += \
    $$PWD/README.md
