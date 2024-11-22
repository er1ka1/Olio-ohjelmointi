#include "car.h"

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

Car::Car() {}

Car::Car(string m, string b)
{
    model = m;
    brand = b;
}

void Car::setEngine()
{
    objEngine=Engine(150, 2.0);
}

void Car::setWheels()
{
    objWheel1=Wheel(17,"kesarengas");
    objWheel2=Wheel(17,"kesarengas");
    objWheel3=Wheel(17,"kesarengas");
    objWheel4=Wheel(17,"kesarengas");

}

void Car::printDetails()
{
    cout<<"Auto: "<<model<<" "<<brand<<endl;
    objEngine.getData();
    objWheel1.getData();
    objWheel2.getData();
    objWheel3.getData();
    objWheel4.getData();
}
