QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    form3.cpp \
    form4.cpp \
    form5.cpp \
    formsum.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    form3.h \
    form4.h \
    form5.h \
    formsum.h \
    mainwindow.h

FORMS += \
    form3.ui \
    form4.ui \
    form5.ui \
    formsum.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    sounds.qrc
