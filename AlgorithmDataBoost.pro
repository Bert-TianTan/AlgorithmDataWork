TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    code/system_learn/strtod_stol_test.c \
    code/user_virtual/user_base_virtual.cpp \
    code/user_virtual/userone.cpp \
    code/user_virtual/usertwo.cpp \
    code/user_virtual/testmultivirtual.cpp

HEADERS += \
    code/system_learn/strtod_stol_test.h \
    code/user_virtual/user_base_virtual.h \
    code/user_virtual/userone.h \
    code/user_virtual/usertwo.h \
    code/user_virtual/testmultivirtual.h

