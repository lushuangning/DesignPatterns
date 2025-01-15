#include "Ship.h"

Ship::Ship(ShipBody* body, Weapon* weapon, Engine* engine)
	: m_body(body), m_weapon(weapon), m_engine(engine)
{

}

std::string Ship::getProperty()
{
	std::string info = m_body->getShipBody() 
		+ m_weapon->getWeapon() + m_engine->getEngine();
	return info;
}

Ship::~Ship()
{
	delete m_body;
	delete m_weapon;
	delete m_engine;
}