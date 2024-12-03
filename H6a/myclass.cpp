#include "myclass.h"

MyClass::MyClass(QObject *parent) : QObject(parent)
{
    //mySignal kytketään slottiin mySLOT
    connect(this, SIGNAL(mySignal()), this, SLOT(mySlot()));
}

void MyClass::raiseMySignal()
{
    //"nostetaan" mySignal niminen signaali
    emit mySignal();
}

void MyClass::mySlot()
{
    qDebug()<<"mySlot:ia kutsuttiin";
}
