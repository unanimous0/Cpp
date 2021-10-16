//#pragma once

#ifndef MY_DEF2		// doSomething 헤더 파일에 정의 이름을 MY_DEF로 했는데, 여기서도 MY_DEF로 하니 에러 발생 -> 이름 달라야 함
#define MY_DEF2

int multiply(int a, int b)
{
	return a * b;
}

#endif
