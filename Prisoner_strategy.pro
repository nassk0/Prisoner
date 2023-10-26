TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        counterbehavior.cpp \
        defaultbehavior.cpp \
        isstrategy.cpp \
        light.cpp \
        main.cpp \
        prisoner.cpp \
        warden.cpp

HEADERS += \
    counterbehavior.h \
    defaultbehavior.h \
    isstrategy.h \
    light.h \
    prisoner.h \
    warden.h
