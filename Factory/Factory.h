#pragma once
#include "Smile.h"

class AbstractFactory
{
public:
	virtual AbstractSmile* createSmile() = 0;
	virtual ~AbstractFactory() {}
};

class SheepSmileFactory : public AbstractFactory
{
public:
	AbstractSmile* createSmile() override;
};

class LionSmileFactory : public AbstractFactory
{
public:
	AbstractSmile* createSmile() override;
};

class BatSmileFactory : public AbstractFactory
{
public:
	AbstractSmile* createSmile() override;
};