#include <iostream>
#include "State.h"
#include "Sanji.h"


void ForenoonState::working(Sanji* sanji)
{
	int time = sanji->getClock();

	if (time < 8)
	{
		std::cout << "��ǰʱ��<" << time << ">�㣬׼����ͣ���³�˵ö�ȵ�ţ��..." << std::endl;
	}
	else if (time > 8 && time < 11)
	{
		std::cout << "��ǰʱ��<" << time << ">�㣬ȥ��ͷ���㣬����ʳ��..." << std::endl;
	}
	else
	{
		sanji->setState(new NoonState);
		sanji->working();
	}
}

void NoonState::working(Sanji* sanji)
{
	int time = sanji->getClock();
	if (time < 13)
	{
		std::cout << "��ǰʱ��<" << time << ">��, ȥ�������緹, ��·�ɶ�������..." << std::endl;
	}
	else
	{
		sanji->setState(new AfternoonState);
		sanji->working();
	}
}

void AfternoonState::working(Sanji* sanji)
{
	int time = sanji->getClock();
	if (time < 15)
	{
		std::cout << "��ǰʱ��<" << time << ">��, ׼�������, ���ޱ������������������..." << std::endl;
	}
	else if (time > 15 && time < 18)
	{
		std::cout << "��ǰʱ��<" << time << ">��, ���ǰ�ȥ��β����, ����ʳ��..." << std::endl;
	}
	else
	{
		sanji->setState(new EveningState);
		sanji->working();
	}
}


void EveningState::working(Sanji* sanji)
{
	int time = sanji->getClock();
	if (time < 19)
	{
		std::cout << "��ǰʱ��<" << time << ">��, ȥ��������, ����¡��ȵ���..." << std::endl;
	}
	else
	{
		std::cout << "��ǰʱ��<" << time << ">��, ������úܸ���, ����˯����..." << std::endl;
	}
}
