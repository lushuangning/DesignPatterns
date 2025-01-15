#include <iostream>
#include "Factory.h"

Ship* BasicFactory::createShip()
{
	Ship* ship = new Ship(new WoodBody, new Gun, new Human);
	std::cout << "<基础型>战船生产完毕, 可以下水啦..." << std::endl;
	return ship;
}

Ship* StandardFactory::createShip()
{
	Ship* ship = new Ship(new IronBody, new Cannon, new Diesel);
	std::cout << "<标准型>战船生产完毕, 可以下水啦..." << std::endl;
	return ship;
}

Ship* UltimateFactory::createShip()
{
	Ship* ship = new Ship(new MetalBody, new Laser, new Nuclear);
	std::cout << "<旗舰型>战船生产完毕, 可以下水啦..." << std::endl;
	return ship;
}