QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

QMAKE_CXXFLAGS += /utf-8

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

RC_ICONS = logo.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DESTDIR = ./dist

RESOURCES += \
    resource.qrc

#版本信息
VERSION = 1.0.1

#产品名称
QMAKE_TARGET_PRODUCT = "Version number file creation tool"

#文件说明
QMAKE_TARGET_DESCRIPTION = "Version number file creation tool"

#版权信息
QMAKE_TARGET_COPYRIGHT = "Copyright (c) 2022 hlinfo.net"
#语言，简体中文
RC_LANG = 0x0804
