/*
	Chapter 1   C++�� �������� ����
	Chapter 1.7 ���� ����
*/

#include <iostream>

int main1_7()
{
	int x = 0;
	//int x(0);		// ���� ����
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