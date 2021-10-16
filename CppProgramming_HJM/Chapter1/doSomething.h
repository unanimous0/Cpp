//#pragma once

// #pragma once의 표준/정석은 #ifndef, #define, #endif으로 헤더파일의 내용을 감싸주는 것이 맞음
#ifndef MY_DEF		// if not defined - 정의가 되지 않았다면 -> 즉 아래 내용이 이미 정의되었다면 / include 되었다면 정의하지 말라는 것
#define MY_DEF		// 그러나 정의되지 않았다면 / include 되지 않았다면 아래 내용을 정의하라는 것


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