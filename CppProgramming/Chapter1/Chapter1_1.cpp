/*
	Chapter 1   C++의 기초적인 사용법
	Chapter 1.1 프로그램의 구조
*/

#include <iostream>		// Preprocessor Directive (전처리기)

int main1_1(void)
{
	int x = 2;
	x = 5;
	int y = x + 3;

	std::cout << y << std::endl;
	
	return 0;
}
