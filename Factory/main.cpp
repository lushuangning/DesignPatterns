#include <iostream>
#include "Smile.h"
#include "Factory.h"

int main()
{
	AbstractFactory* factory = new BatSmileFactory;
	AbstractSmile* smile = factory->createSmile();
	smile->transform();
	smile->ability();
	return 0;
}