#include "SimpleFactory.h"

AbstractSmile* SmileFactory::createSmile(FactoryType type)
{
    AbstractSmile* smile = nullptr;
    switch (type)
    {
    case FactoryType::SHEEP:
        smile = new SheepSmile;
        break;
    case FactoryType::LION:
        smile = new LionSmile;
        break;
    case FactoryType::BAT:
        smile = new BatSmile;
        break;
    default:
        break;
    }
    return smile;
}