#include <iostream>
#include "Communication.h"

int main()
{
	// ֱ�ӽ���
	Communication* comm = new Speaker;
	comm->communicate();
	delete comm;

	std::cout << "===================================" << std::endl;
	// ʹ�õ绰��
	comm = new DenDenMushi;
	comm->communicate();
	delete comm;

	return 0;
}