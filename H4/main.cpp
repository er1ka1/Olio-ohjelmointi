#include "car.h"

#include <iostream>

using namespace std;

int main()
{
    Car objCar= Car("Toyota", "Corolla");
    objCar.setEngine();
    objCar.setWheels();
    objCar.printDetails();
    return 0;
}
