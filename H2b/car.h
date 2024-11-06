#ifndef CAR_H
#define CAR_H
#include <iostream>

using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearModel;
public:
    Car(string, string, int);
    string getBrand() const;
    void setBrand(const string &newBrand);
    string getModel() const;
    void setModel(const string &newModel);
    int getyearModel() const;
    void setyearModel(int newYearmodel);
    void printData();
};

#endif // CAR_H
