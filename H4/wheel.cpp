#include "wheel.h"

int Wheel::getSize() const
{
    return size;
}

void Wheel::setSize(int newSize)
{
    size = newSize;
}

string Wheel::getType() const
{
    return type;
}

void Wheel::setType(const string &newType)
{
    type = newType;
}


Wheel::Wheel() {}

Wheel::Wheel(int s, string t)
{
    setSize(s);
    type = t;
}

void Wheel::getData()
{
    cout<<"Rengas: "<<getSize()<<" tuumaa, "<<getType()<<endl;

}
