#include "Morgans.h"

void Morgans::notify(std::string msg)
{
	std::cout << "Ħ��˹�����籨ֽ�Ķ�����һ���� <" << m_list.size() << "> ��" << std::endl;
	for (const auto& item : m_list)
	{
		item->update(msg);
	}
}