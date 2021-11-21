QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

RC_ICONS = Icons/ICON.ico

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
    Classes/gameclassname.cpp \
    DataBase/databaseconnector.cpp \
    DataBase/databaseconnectorstatics.cpp \
    DataBase/databaseupdater.cpp \
    DataBase/databaseupdaterstatics.cpp \
    Registers/Spell/spellcastfn.cpp \
    Registers/Spell/spelleffectfn.cpp \
    Registers/Spell/spellhitfn.cpp \
    Salary/commit.cpp \
    Salary/salarystatics.cpp \
    Scripts/spellscript.cpp \
    Scripts/ssaura.cpp \
    Scripts/ssspell.cpp \
    Settings/databasesettings.cpp \
    Settings/settingbase.cpp \
    SpecialsWidgets/lineeditwithicon.cpp \
    main.cpp \
    ProgramWindows/mainwindow.cpp \
    ProgramWindows/payroll.cpp \
    Scripts/script.cpp \
    Registers/scriptregister.cpp \
    ProgramWindows/settingswindow.cpp \
    Tools/textstatics.cpp

HEADERS += \
    Classes/gameclassname.h \
    DataBase/databaseconnector.h \
    DataBase/databaseconnectorstatics.h \
    DataBase/databaseupdater.h \
    DataBase/databaseupdaterstatics.h \
    Classes/ObjectBase.h \
    Registers/Spell/spellcastfn.h \
    Registers/Spell/spelleffectfn.h \
    Registers/Spell/spellhitfn.h \
    Salary/commit.h \
    Salary/salarystatics.h \
    Scripts/spellscript.h \
    Scripts/ssaura.h \
    Scripts/ssspell.h \
    Settings/databasesettings.h \
    Settings/settingbase.h \
    SpecialsWidgets/lineeditwithicon.h \
    ProgramWindows/mainwindow.h \
    ProgramWindows/payroll.h \
    Scripts/script.h \
    Registers/scriptregister.h \
    ProgramWindows/settingswindow.h \
    Tools/statictools.h \
    Tools/textstatics.h

FORMS += \
    Forms/mainwindow.ui \
    Forms/payroll.ui \
    Forms/settingswindow.ui

TRANSLATIONS += \
    TestProj_ru_RU.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Icons/AddRegNot.png \
    Icons/AddRegOn.png \
    Icons/DBOff.png \
    Icons/DBOn.png \
    Icons/DelRegOff.png \
    Icons/DelRegOn.png \
    Icons/FindOff.png \
    Icons/FindOn.png \
    Icons/GenOff.png \
    Icons/GenOn.png \
    Icons/ICON.ico \
    Icons/ProgramMain.png \
    Icons/Salary.png \
    Icons/SettDBOff.png \
    Icons/SettDBOn.png \
    Icons/SettSQLOff.png \
    Icons/SettSQLOn.png \
    Icons/SettScOff.png \
    Icons/SettScOn.png \
    Icons/SettingEnabled.png \
    Icons/not_ok.png \
    Icons/ok.png

