#include <iostream>
#include "Communication.h"

int main()
{
	// 直接交流
	Communication* comm = new Speaker;
	comm->communicate();
	delete comm;

	std::cout << "===================================" << std::endl;
	// 使用电话虫
	comm = new DenDenMushi;
	comm->communicate();
	delete comm;

	return 0;
}