/*
	Chapter 1   C++의 기초적인 사용법
	Chapter 1.8 연산자 (Operators)
*/

#include <iostream>

int main1_8(void)
{
	// 조건 연산자 (Conditional Operator)는 c++의 유일한 삼항 연산자 (Ternary Operator)

	int x = 2;

	int y = (x < 0) ? true : false;
	int z = (-x < 0) ? 10 : 20;

	std::cout << y << std::endl;
	std::cout << z << std::endl;

	return 0;
}