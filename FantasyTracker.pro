# ----------------------------------------------------
# This file is generated by the Qt Visual Studio Add-in.
# ------------------------------------------------------

TEMPLATE = app
TARGET = FantasyTracker
DESTDIR = ../Win32/Debug
QT += core network widgets gui
CONFIG += debug
DEFINES += _UNICODE _ENABLE_EXTENDED_ALIGNED_STORAGE WIN64 QT_DLL QT_NETWORK_LIB QT_WIDGETS_LIB
INCLUDEPATH += ./GeneratedFiles \
    . \
    ./GeneratedFiles/Debug
PRECOMPILED_HEADER = stdafx.h
DEPENDPATH += .
MOC_DIR += ./GeneratedFiles/debug
OBJECTS_DIR += debug
UI_DIR += ./GeneratedFiles
RCC_DIR += ./GeneratedFiles
include(FantasyTracker.pri)