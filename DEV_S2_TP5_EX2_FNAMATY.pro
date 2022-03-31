TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        culturalproduct.cpp \
        main.cpp \
        multimediaproduct.cpp \
        perishableproduct.cpp \
        product.cpp

HEADERS += \
    culturalproduct.h \
    multimediaproduct.h \
    perishableproduct.h \
    product.h
