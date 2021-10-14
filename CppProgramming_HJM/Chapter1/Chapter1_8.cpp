/*
	Chapter 1   C++�� �������� ����
	Chapter 1.8 ������ (Operators)
*/

#include <iostream>

int main1_8(void)
{
	// ���� ������ (Conditional Operator)�� c++�� ������ ���� ������ (Ternary Operator)

	int x = 2;

	int y = (x < 0) ? true : false;
	int z = (-x < 0) ? 10 : 20;

	std::cout << y << std::endl;
	std::cout << z << std::endl;

	return 0;
}