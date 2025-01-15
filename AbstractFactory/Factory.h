#pragma once
#include <string>
#include "Ship.h"

class AbstractFactory
{
public:
	virtual Ship* createShip() = 0;
	virtual ~AbstractFactory() {}
};

class BasicFactory : public AbstractFactory
{
public:
	Ship* createShip() override;
};

class StandardFactory : public AbstractFactory
{
public:
	Ship* createShip() override;
};

class UltimateFactory : public AbstractFactory
{
public:
	Ship* createShip() override;
};