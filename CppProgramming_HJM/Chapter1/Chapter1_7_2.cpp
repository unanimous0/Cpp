/*
	Chapter 1	  C++의 기초적인 사용법
	Chapter 1.7.2 지역 범위 예제 with 포인터
*/

#include <iostream>

void doSomething(int* x)
{
	*x = 123;
	std::cout << "No 2 Address: " << x << std::endl;
	std::cout << "No 2 Value: " << *x << std::endl << std::endl;;
}

int main1_7_2()
{
	int x = 0;

	std::cout << "No 1 Value: " << x << std::endl;
	std::cout << "No 1 Address: " << &x << std::endl << std::endl;

	doSomething(&x);

	std::cout << "No 3 Value: " << x << std::endl;
	std::cout << "No 3 Address: " << &x << std::endl << std::endl;

	return 0;
}
