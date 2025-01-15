#include "Gossip.h"

void Gossip::notify(std::string msg)
{
	std::cout << "八卦新闻社报纸的订阅者一共有 <" << m_list.size() << "> 人" << std::endl;
	for (const auto& item : m_list)
	{
		item->update(msg);
	}
}