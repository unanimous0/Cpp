//#pragma once

// #pragma once�� ǥ��/������ #ifndef, #define, #endif���� ��������� ������ �����ִ� ���� ����
#ifndef MY_DEF		// if not defined - ���ǰ� ���� �ʾҴٸ� -> �� �Ʒ� ������ �̹� ���ǵǾ��ٸ� / include �Ǿ��ٸ� �������� ����� ��
#define MY_DEF		// �׷��� ���ǵ��� �ʾҴٸ� / include ���� �ʾҴٸ� �Ʒ� ������ �����϶�� ��


#include <iostream>
#include "multiply.h"
/*
	int multiply(int a, int b)
	{
		return a + b;
	}
*/

void doSomething()
{
	int result = multiply(1, 2);

	std::cout << result << std::endl;
}

#endif