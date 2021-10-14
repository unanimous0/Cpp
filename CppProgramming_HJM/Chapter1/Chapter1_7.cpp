/*
	Chapter 1   C++의 기초적인 사용법
	Chapter 1.7 지역 범위
*/

#include <iostream>

int main1_7()
{
	int x = 0;
	//int x(0);		// 위와 같음
	std::cout << "No.1: " << x << std::endl;
	std::cout << "No.1 Address: " << &x << std::endl;

	{
		int x = 1;
		std::cout << "No.2: " << x << std::endl;
		std::cout << "No.2 Address: " << &x << std::endl;
	}

	{
		x = 2;
		std::cout << "No.3: " << x << std::endl;
		std::cout << "No.3 Address: " << &x << std::endl;
	}

	std::cout << "No.4: " << x << std::endl;
	std::cout << "No.4 Address: " << &x << std::endl;

	return 0;
}