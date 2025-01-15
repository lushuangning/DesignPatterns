#pragma once
#include <iostream>
#include <string>
#include "NewsAgency.h"

// 先声明，以解决交叉引用问题
class NewsAgency;

class Subscriber
{
public:
	Subscriber(const std::string name, NewsAgency* news);
	void unsubscribe();

	virtual void update(std::string msg) = 0;
	virtual ~Subscriber() {}
protected:
	std::string m_name;
	NewsAgency* m_news;
};

