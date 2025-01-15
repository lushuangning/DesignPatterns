#pragma once
#include <string>

class Weapon
{
public:
	virtual std::string getWeapon() = 0;
	virtual ~Weapon() {}
};

class Gun : public Weapon
{
public:
	std::string getWeapon() override
	{
		return std::string("配备的武器是<枪>");
	}
};

class Cannon : public Weapon
{
public:
	std::string getWeapon() override
	{
		return std::string("配备的武器是<自动机关炮>");
	}
};

class Laser : public Weapon
{
public:
	std::string getWeapon() override
	{
		return std::string("配备的武器是<激光>");
	}
};