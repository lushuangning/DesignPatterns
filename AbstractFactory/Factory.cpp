#include <iostream>
#include "Factory.h"

Ship* BasicFactory::createShip()
{
	Ship* ship = new Ship(new WoodBody, new Gun, new Human);
	std::cout << "<������>ս���������, ������ˮ��..." << std::endl;
	return ship;
}

Ship* StandardFactory::createShip()
{
	Ship* ship = new Ship(new IronBody, new Cannon, new Diesel);
	std::cout << "<��׼��>ս���������, ������ˮ��..." << std::endl;
	return ship;
}

Ship* UltimateFactory::createShip()
{
	Ship* ship = new Ship(new MetalBody, new Laser, new Nuclear);
	std::cout << "<�콢��>ս���������, ������ˮ��..." << std::endl;
	return ship;
}