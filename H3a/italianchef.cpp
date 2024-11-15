#include "italianchef.h"

ItalianChef::ItalianChef()
{

}

ItalianChef::ItalianChef(string n) : Chef(n)
{
    this->setName(n);
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef "<< name << " destruktori"<<endl;
}

string ItalianChef::getName() const
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Italian Chef "<< name << " makes pasta"<<endl;
}
