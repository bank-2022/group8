QT       += core gui
QT       +=network
QT       +=serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    login.cpp \
    main.cpp \
    mainui.cpp \
    mainwindow.cpp \
    transactions.cpp \
    user.cpp \
    withdraw.cpp

HEADERS += \
    login.h \
    mainui.h \
    mainwindow.h \
    transactions.h \
    user.h \
    withdraw.h

FORMS += \
    login.ui \
    mainui.ui \
    mainwindow.ui \
    transactions.ui \
    withdraw.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


win32: LIBS += -L$$PWD/RFID125/build-RFID125-Desktop_Qt_5_15_2_MinGW_32_bit-Debug/debug/ -lRFID125

INCLUDEPATH += $$PWD/RFID125
DEPENDPATH += $$PWD/RFID125


win32: LIBS += -L$$PWD/PinDll/build/debug/ -lPinDll

INCLUDEPATH += $$PWD/PinDll
DEPENDPATH += $$PWD/PinDll


win32: LIBS += -L$$PWD/Api_dll/build/debug/ -lApi_dll

INCLUDEPATH += $$PWD/Api_dll
DEPENDPATH += $$PWD/Api_dll
