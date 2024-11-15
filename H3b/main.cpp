#include <iostream>
#include "animal.h"
#include "dog.h"
using namespace std;

int main()
{
    Animal *objAnimal;
    objAnimal = new Animal;
    objAnimal-> callOut();

    Dog *objDog;
    objDog = new Dog;
    objDog-> callOut();


    // olioiden tuhoaminen
    delete objDog;
    objDog=nullptr;
    delete objAnimal;
    objAnimal=nullptr;


    return 0;
}
