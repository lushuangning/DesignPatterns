#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Subscriber.h"

// 先声明，以解决交叉引用问题
class Subscriber;

class NewsAgency
{
public:
	void attach(Subscriber* sub);
	void deatch(Subscriber* sub);

	virtual void notify(std::string msg) = 0;
	virtual ~NewsAgency() {};

protected:
	std::list<Subscriber*> m_list;
};
