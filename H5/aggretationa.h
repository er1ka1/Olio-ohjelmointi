#ifndef AGGRETATIONA_H
#define AGGRETATIONA_H
#include <iostream>
#include "classb.h"

using namespace std;


class AggregationA
{
private:
    ClassB &refB;
public:
    AggregationA(ClassB&);
    string getBinfo();
    void setBinfo(string);
};

#endif // AGGRETATIONA_H
