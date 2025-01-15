#include "Subscriber.h"

Subscriber::Subscriber(const std::string name, NewsAgency* news) 
	: m_name(name), m_news(news)
{
	m_news->attach(this);
}

void Subscriber::unsubscribe()
{
	m_news->deatch(this);
}