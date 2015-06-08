#-------------------------------------------------
#
# Project created by QtCreator 2015-06-07T16:21:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Estructura-Works-P2-NR
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Tarea1/ArbolesNarios.cpp \
    Tarea2/ColaPrioridades.cpp \
    Tarea3/ArbolPrioridades.cpp

HEADERS  += mainwindow.h \
    Tarea1/ArbolesNarios.h \
    Tarea2/ColaPrioridades.h \
    Tarea3/ArbolPrioridades.h \
    ClasesGenerales/nodo.h \
    Tarea2/colaprioridad.h \
    Tarea3/arbolprioridad.h

FORMS    += mainwindow.ui \
    Tarea1/ArbolesNarios.ui \
    Tarea2/ColaPrioridades.ui \
    Tarea3/ArbolPrioridades.ui
