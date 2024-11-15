#ifndef CHEF_H
#define CHEF_H
#include <iostream>

using namespace std;

class Chef
{
protected:
    string name;
public:
    Chef();             //tyhjä konstruktori
    Chef(string);       //konstruktori, joka ottaa parametrit
    ~Chef();            //destruktori
    void makeSalad();
    void makeSoup();
    string getName() const;
    void setName(const string &newName);

    void printData();

};

#endif // CHEF_H
