#include "assosiationa.h"

AssosiationA::AssosiationA(ClassB value):objB(value)
{
}

string AssosiationA::getBinfo()
{
    return objB.getInfo();
}

void AssosiationA::setBinfo(string value)
{
    objB.setInfo(value);
}
