TARGET = SailfishProjectTest

CONFIG += sailfishapp c++11 qt

QT += testlib

SOURCES += main.cpp \
    testmyclass.cpp

HEADERS += \
    testmyclass.h

INCLUDEPATH += ../app/
include(../app/app.pri)
