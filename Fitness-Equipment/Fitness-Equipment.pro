QT       += core gui \
            serialport \
            charts\

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
    application/SerialPort/serialportservice.cpp \
    application/UnitreeMotorSerialService/unitreemotorserialservice.cpp \
    main.cpp \
    mainwindow.cpp \
    ui/applicationwindow.cpp \
    ui/equipmentconnect.cpp \
    ui/equipmentitem.cpp \
    ui/healthmanagerwindow.cpp \
    ui/manualwindow.cpp \
    ui/sportwindow.cpp \
    userLib/userLib_ui.cpp

HEADERS += \
    application/SerialPort/serialportservice.h \
    application/UnitreeMotorSerialService/unitreemotorserialservice.h \
    mainwindow.h \
    ui/applicationwindow.h \
    ui/equipmentconnect.h \
    ui/equipmentitem.h \
    ui/healthmanagerwindow.h \
    ui/manualwindow.h \
    ui/sportwindow.h \
    userLib/UnitreeMotorSDK_A1Go1_Sup220423/include/CRC/crc32.h \
    userLib/UnitreeMotorSDK_A1Go1_Sup220423/include/IOPort/IOPort.h \
    userLib/UnitreeMotorSDK_A1Go1_Sup220423/include/serialPort/SerialPort.h \
    userLib/UnitreeMotorSDK_A1Go1_Sup220423/include/serialPort/include/errorClass.h \
    userLib/UnitreeMotorSDK_A1Go1_Sup220423/include/unitreeMotor/include/motor_msg.h \
    userLib/UnitreeMotorSDK_A1Go1_Sup220423/include/unitreeMotor/unitreeMotor.h \
    userLib/packet.hpp \
    userLib/userLib_ui.h

FORMS += \
    mainwindow.ui \
    ui/applicationwindow.ui \
    ui/equipmentconnect.ui \
    ui/equipmentitem.ui \
    ui/healthmanagerwindow.ui \
    ui/manualwindow.ui \
    ui/sportwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource/resource.qrc

DISTFILES += \
    ../README.md \


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/userLib/UnitreeMotorSDK_A1Go1_Sup220423/lib/release/ -lunitreeMotorSDK_Arm64
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/userLib/UnitreeMotorSDK_A1Go1_Sup220423/lib/debug/ -lunitreeMotorSDK_Arm64
else:unix: LIBS += -L$$PWD/userLib/UnitreeMotorSDK_A1Go1_Sup220423/lib/ -lunitreeMotorSDK_Arm64

INCLUDEPATH += $$PWD/userLib/UnitreeMotorSDK_A1Go1_Sup220423/include
DEPENDPATH += $$PWD/userLib/UnitreeMotorSDK_A1Go1_Sup220423/include
