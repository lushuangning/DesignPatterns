#include <iostream>
#include "NewsAgency.h"
#include "Subscriber.h"

#include "Morgans.h"
#include "Gossip.h"

#include "Shanks.h"
#include "Dragon.h"
#include "Bartolomeo.h"

int main()
{
	Morgans* ms = new Morgans;
	Gossip* gossip = new Gossip;

	Dragon* dragon = new Dragon("���桤D����",  ms);
	Shanks* shanks = new Shanks("���˹", ms);
	Bartolomeo* barto = new Bartolomeo("�������װ�", gossip);
	ms->notify("���桤D��·�ɳ�Ϊ��������µ��Ļ�֮һ���ͽ�30�ڱ������");
	std::cout << "======================================" << std::endl;
	gossip->notify("Ů�ۺ������Ҫ�޸�·�ɣ���·�������ӣ�����������");

	delete ms;
	delete gossip;

	delete dragon;
	delete shanks;
	delete barto;

	return 0;
}
