#include "Factory.h"

AbstractSmile* SheepSmileFactory::createSmile()
{
	return new SheepSmile;
}

AbstractSmile* LionSmileFactory::createSmile()
{
	return new LionSmile;
}

AbstractSmile* BatSmileFactory::createSmile()
{
	return new BatSmile;
}
