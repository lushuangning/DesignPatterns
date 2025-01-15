#pragma once

#include <string>

class ShipBody
{
public:
	virtual std::string getShipBody() = 0;
	virtual ~ShipBody() {}
};

class WoodBody : public ShipBody
{
public:
	std::string getShipBody() override
	{
		return std::string("用<木材>制作轮船船体...");
	}
};

class IronBody : public ShipBody
{
public:
	std::string getShipBody() override
	{
		return std::string("用<钢铁>制作轮船船体...");
	}
};

class MetalBody : public ShipBody
{
public:
	std::string getShipBody() override
	{
		return std::string("用<合金>制作轮船船体...");
	}
};