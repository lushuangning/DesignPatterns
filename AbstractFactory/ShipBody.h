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
		return std::string("��<ľ��>�����ִ�����...");
	}
};

class IronBody : public ShipBody
{
public:
	std::string getShipBody() override
	{
		return std::string("��<����>�����ִ�����...");
	}
};

class MetalBody : public ShipBody
{
public:
	std::string getShipBody() override
	{
		return std::string("��<�Ͻ�>�����ִ�����...");
	}
};