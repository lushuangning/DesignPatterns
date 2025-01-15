#include "Gossip.h"

void Gossip::notify(std::string msg)
{
	std::cout << "���������籨ֽ�Ķ�����һ���� <" << m_list.size() << "> ��" << std::endl;
	for (const auto& item : m_list)
	{
		item->update(msg);
	}
}