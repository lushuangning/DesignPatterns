#include "Communication.h"
#include <iostream>

void  Speaker::communicate()
{
	std::cout << "开始说话..." << std::endl;
	std::cout << "通话时发生了一些列的表情变化..." << std::endl;
}


DenDenMushi::DenDenMushi()
{
	m_isStart = true;
	m_speaker = new Speaker;
}

DenDenMushi::~DenDenMushi()
{
	if (m_speaker)
	{
		delete m_speaker;
	}
}

bool DenDenMushi::isStart()
{
	return m_isStart;
}

void DenDenMushi::communicate()
{
	if (isStart())
	{
		// 得到通话者语言和表情信息, 并加以模仿
		std::cout << "电话虫开始实时模仿通话者的语言和表情..." << std::endl;
		m_speaker->communicate();
	}
}