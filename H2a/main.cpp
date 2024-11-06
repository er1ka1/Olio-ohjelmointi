#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>

using namespace std;

int main()
{
//Car olion luominen pinomuistiin (automaattinen olio)
    Car objCar;
    objCar.setBrand("Audi");
    objCar.setModel("A3");
    objCar.setyearModel(2014);
    // tietojen tulostus
    objCar.printData();
// Olio tuhoaa itse itsensä


//Rechtangle olion luominen kekomuistiin (dynaaminen olio)
    Rectangle *objRectangle;
    objRectangle = new Rectangle;
    objRectangle->setWidth(7.0);
    objRectangle->setHeight(5.0);
    cout<<"The area of the rectangle: "<<objRectangle->getArea()<<endl;
    cout<<"The circum of the rectangle: "<<objRectangle->getCircum()<<endl;

// Rechtangle olion tuhoaminen
    delete objRectangle;
    objRectangle=nullptr;
    cout<<"Rectangle being destroyed."<<endl;
    cout<<"----------------------------------"<<endl;


//Student olion luonti smart pointerilla kekomuistiin
    unique_ptr<Student> objStudent = make_unique<Student>();
    objStudent->setName("Pekka Pouta");
    objStudent->setStudentNumber(256748);
    objStudent->setAverage(9.8);
    cout<<"Student name: "<<objStudent->getName()<<endl;
    cout<<"Student number: "<<objStudent->getStudentNumber()<<endl;
    cout<<"Student average: "<<objStudent->getAverage()<<endl;

    return 0;
}
