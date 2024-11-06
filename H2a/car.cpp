#include "car.h"

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand=newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model=newModel;
}

int Car::getyearModel() const
{
    return yearModel;
}

void Car::setyearModel(int newyearModel)
{
    yearModel=newyearModel;
}

void Car::printData()
{
    cout<<"Car brand is: "<<brand<<endl;
    cout<<"Car model is: "<<model<<endl;
    cout<<"Car yearmodel is: "<<yearModel<<endl;
    cout<<"----------------------------------"<<endl;
}
