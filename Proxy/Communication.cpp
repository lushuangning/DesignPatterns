#include "Communication.h"
#include <iostream>

void  Speaker::communicate()
{
	std::cout << "��ʼ˵��..." << std::endl;
	std::cout << "ͨ��ʱ������һЩ�еı���仯..." << std::endl;
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
		// �õ�ͨ�������Ժͱ�����Ϣ, ������ģ��
		std::cout << "�绰�濪ʼʵʱģ��ͨ���ߵ����Ժͱ���..." << std::endl;
		m_speaker->communicate();
	}
}