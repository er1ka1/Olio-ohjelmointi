#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;


int main()
{
    Chef objChef=Chef("Gordon Ramsay");   //olio pinomuistiin
    objChef.printData();
    objChef.makeSalad();
    objChef.makeSoup();

    cout<<"---------------------------------"<<endl;

    ItalianChef objItalianChef=ItalianChef("Anthony Bourdain");
    objItalianChef.printData();
    cout<<"ItalianChef "<<objItalianChef.getName()<<" konstruktori"<<endl;
    objItalianChef.makeSalad();
    objItalianChef.makeSoup();
    objItalianChef.makePasta();
    cout<<"name of the Italian Chef is "<<objItalianChef.getName()<<endl;

    return 0;
}
