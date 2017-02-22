TARGET = SailfishProject

CONFIG += sailfishapp \
          sailfishapp_i18n \
          c++11

DISTFILES += \
    qml/SailfishProject.qml \
    qml/cover/*qml

SOURCES += src/sailfishproject.cpp

OTHER_FILES += SailfishProject.desktop

include(app.pri)

SAILFISHAPP_ICONS = 86x86 108x108 128x128 256x256
