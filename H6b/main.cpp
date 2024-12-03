#include "exampleclass.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ExampleClass *objExample=new ExampleClass;
    objExample->startToWait();

    delete objExample;
    objExample=nullptr;

    return a.exec();
}
