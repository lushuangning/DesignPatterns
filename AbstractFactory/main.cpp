#include <iostream>
#include "Ship.h"
#include "Factory.h"

int main()
{
    AbstractFactory* factory = new StandardFactory;
    Ship* ship = factory->createShip();
    std::cout << ship->getProperty();
    delete ship;
    delete factory;
    return 0;
}
