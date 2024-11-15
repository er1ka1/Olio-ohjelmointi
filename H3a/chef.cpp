#include "chef.h"

#include "chef.h"

string Chef::getName() const
{
    return name;
}

void Chef::setName(const string &newName)
{
    name = newName;
}

void Chef::makeSalad()
{
    cout<<"Chef "<<name<<" makes salad"<<endl;
}

void Chef::makeSoup()
{
    cout<<"Chef "<<name<<" makes soup"<<endl;
}

Chef::Chef()
{

}

Chef::Chef(string n)
{
    name = n;
}

Chef::~Chef()
{
    cout<<"Chef "<<name<<" destruktori"<<endl;
}

void Chef::printData()
{
    cout<<"Chef "<<name<<" konstruktori"<<endl;
}


