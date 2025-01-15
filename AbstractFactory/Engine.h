#pragma once
#include <string>

class Engine
{
public:
	virtual std::string getEngine() = 0;
	virtual ~Engine() {}
};

class Human : public Engine
{
public:
	std::string getEngine() override
	{
		return std::string("使用<人力驱动>...");
	}
};

class Diesel : public Engine
{
public:
	std::string getEngine() override
	{
		return std::string("使用<内燃机驱动>...");
	}
};

class Nuclear : public Engine
{
public:
	std::string getEngine() override
	{
		return std::string("使用<核能驱动>...");
	}
};