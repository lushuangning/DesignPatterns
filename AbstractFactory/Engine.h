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
		return std::string("ʹ��<��������>...");
	}
};

class Diesel : public Engine
{
public:
	std::string getEngine() override
	{
		return std::string("ʹ��<��ȼ������>...");
	}
};

class Nuclear : public Engine
{
public:
	std::string getEngine() override
	{
		return std::string("ʹ��<��������>...");
	}
};