#include "engine.h"

int Engine::getHorsepower() const
{
    return horsepower;
}

void Engine::setHorsepower(int newHorsepower)
{
    horsepower = newHorsepower;
}

double Engine::getDisplacement() const
{
    return displacement;
}

void Engine::setDisplacement(double newDisplacement)
{
    displacement = newDisplacement;
}


Engine::Engine() {}

Engine::Engine(int h, double d)
{
    setHorsepower(h);
    setDisplacement(d);
}


void Engine::getData()
{
    cout<<"Moottori: "<<horsepower<<" hp, "<<displacement<<" L"<<endl;
}
