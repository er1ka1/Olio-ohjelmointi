#include "car.h"

Car::Car(string b, string m, int y)
{
    brand = b;
    model = m;
    setyearModel(y);
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getyearModel() const
{
    return yearModel;
}

void Car::setyearModel(int newyearModel)
{
    yearModel = newyearModel;
}

void Car::printData()
{
    cout<<"Brand: "<<getBrand()<<" Model: "<<getModel()<<" YearModel: "<<getyearModel()<<endl;

}
