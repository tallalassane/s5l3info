QT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        anniversaires_entreprise.cpp \
        complexe.cpp \
        date.cpp \
        levee_de_fonds.cpp \
        main.cpp \
        soiree.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    anniversaires_entreprise.h \
    complexe.h \
    date.h \
    levee_de_fonds.h \
    soiree.h
