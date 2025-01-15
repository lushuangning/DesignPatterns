#include "Morgans.h"

void Morgans::notify(std::string msg)
{
	std::cout << "摩根斯新闻社报纸的订阅者一共有 <" << m_list.size() << "> 人" << std::endl;
	for (const auto& item : m_list)
	{
		item->update(msg);
	}
}