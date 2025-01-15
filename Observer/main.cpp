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

	Dragon* dragon = new Dragon("蒙奇·D·龙",  ms);
	Shanks* shanks = new Shanks("香克斯", ms);
	Bartolomeo* barto = new Bartolomeo("巴托洛米奥", gossip);
	ms->notify("蒙奇·D·路飞成为新世界的新的四皇之一，赏金30亿贝里！！！");
	std::cout << "======================================" << std::endl;
	gossip->notify("女帝汉库克想要嫁给路飞，给路飞生猴子，哈哈哈……");

	delete ms;
	delete gossip;

	delete dragon;
	delete shanks;
	delete barto;

	return 0;
}
