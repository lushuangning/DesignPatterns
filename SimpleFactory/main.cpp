#include <iostream>
#include "SimpleFactory.h"

int main()
{
    SmileFactory* factory = new SmileFactory;
    AbstractSmile* obj = factory->createSmile(FactoryType::BAT);
    obj->transform();
    obj->ability();
    return 0;
}