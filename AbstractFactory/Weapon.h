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
		return std::string("�䱸��������<ǹ>");
	}
};

class Cannon : public Weapon
{
public:
	std::string getWeapon() override
	{
		return std::string("�䱸��������<�Զ�������>");
	}
};

class Laser : public Weapon
{
public:
	std::string getWeapon() override
	{
		return std::string("�䱸��������<����>");
	}
};