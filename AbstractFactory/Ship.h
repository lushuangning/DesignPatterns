#pragma once
#include "ShipBody.h"
#include "Engine.h"
#include "Weapon.h"

class Ship
{
public:
	Ship(ShipBody* body, Weapon* weapon, Engine* engine);
	std::string getProperty();
	~Ship();

private:
	ShipBody* m_body = nullptr;
	Weapon* m_weapon = nullptr;
	Engine* m_engine = nullptr;
};

