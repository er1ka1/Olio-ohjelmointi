#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;
    Car objCar_1=Car("Audi","A3",2014);
    Car objCar_2=Car("Volgswagen","Passat",2020);
    Car objCar_3=Car("Volvo","XC60",2019);

    //Oliot listaan(vektoriin)
    carList.push_back(objCar_1);
    carList.push_back(objCar_2);
    carList.push_back(objCar_3);

    //Listan toisen alkion tietojen tulostus
    cout<<"Second car of the list: "<<endl;
    carList[1].printData();
    cout<<"-------------------------------"<<endl;

    //Kaikkien autojen tietojen tulostus
    cout<<"All cars: "<<endl;
    for(int i = 0; i <= 2; i++) {
        carList[i].printData();
    }

    return 0;
}
