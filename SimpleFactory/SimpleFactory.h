#pragma once
#include "Smile.h"

enum class FactoryType :char 
{ 
	SHEEP, 
	LION, 
	BAT 
};

class SmileFactory
{
public:
	SmileFactory() {}
	~SmileFactory() {}
	AbstractSmile* createSmile(FactoryType type);
};