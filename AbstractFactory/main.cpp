#include <iostream>
#include "Ship.h"
#include "Factory.h"

int main()
{
    AbstractFactory* factroy = new StandardFactory;
    Ship* ship = factroy->createShip();
    std::cout << ship->getProperty();
    delete ship;
    delete factroy;
    return 0;
}
