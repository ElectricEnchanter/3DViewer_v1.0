QT       += core gui widgets opengl openglwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

include(./QtGifImage/gifimage/qtgifimage.pri)

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../parser.c \
    main.cpp \
    mainwindow.cpp \
    opgwidget.cpp

HEADERS += \
    ../parser.h \
    mainwindow.h \
#    QtGifImage/gifimage/qgifimage.h \
    opgwidget.h

FORMS += \
    mainwindow.ui

macx: ICON = ../../assets/icons/icon.icns

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
