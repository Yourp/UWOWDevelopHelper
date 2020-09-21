QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Classes/classname.cpp \
    DataBase/databaseconnector.cpp \
    Registers/Spell/spellcastfn.cpp \
    Registers/Spell/spelleffectfn.cpp \
    Registers/Spell/spellhitfn.cpp \
    Scripts/spellscript.cpp \
    Scripts/ssspell.cpp \
    main.cpp \
    mainwindow.cpp \
    script.cpp \
    scriptregister.cpp \
    settings.cpp \
    textstatics.cpp

HEADERS += \
    Classes/classname.h \
    DataBase/databaseconnector.h \
    Registers/Spell/spellcastfn.h \
    Registers/Spell/spelleffectfn.h \
    Registers/Spell/spellhitfn.h \
    Scripts/spellscript.h \
    Scripts/ssspell.h \
    ScriptsObject.h \
    mainwindow.h \
    script.h \
    scriptregister.h \
    settings.h \
    textstatics.h

FORMS += \
    mainwindow.ui \
    settings.ui

TRANSLATIONS += \
    TestProj_ru_RU.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

