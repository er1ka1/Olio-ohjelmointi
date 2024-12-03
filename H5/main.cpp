#include "assosiationa.h"
#include "classb.h"
#include "aggretationa.h"

#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    cout<<"a:n arvo on: "<<a<<" ja osoite on: "<<&a<<endl;
    cout<<"b:n arvo on: "<<b<<" ja osoite on: "<<&b<<endl;
    cout<<endl;

    int *myPointer;
    myPointer= &a;
    *myPointer= 100;
    cout<<"Pointterin osoittama osoite on: "<<myPointer<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on: "<<*myPointer<<endl;
    cout<<endl;

    myPointer=&b;
    cout<<"Pointterin osoittama osoite on: "<<myPointer<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on: "<<*myPointer<<endl;
    cout<<endl;

    int &refA = a;  //ref = viittaus muuttujaan a
    cout<<"refA osoittaa osoitteeseen on: "<<&refA<<endl;
    cout<<"refA:n osoittaman muistipaikan arvon on: "<<refA<<endl;
    cout<<endl;
    cout<<endl;

    //Referenssiä ei voi muuttaa osoittamaan b muuttujaan, kun
    //se on kerran laitettu osoittamaan a muuttujaan.
    //Referenssi on pysyvä, kun se on luotu muuttujaan a
    //ja se pysyy siinä koko elinkaarensa ajan.

    //myPointer = pointterin osoittama osoite
    //*myPointer = pointterin osoittaman muistipaikan arvo
    //&refA = referenssin osoittama osoite
    //refA = referenssin osoittaman muistipaikan arvo

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");
    cout<<"**********************************"<<endl;
    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;
    cout<<endl;

    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;
    return 0;
}
