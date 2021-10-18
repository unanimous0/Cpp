/*
	Chapter 1    C++의 기초적인 사용법
	Chapter 1.12 링킹 에러 (Linking Error) & 헤더 가드 (Header Guards)
*/

/*
	* Linking Error
	* 헤더파일을 만들 때 Linking Error가 발생하는 이유
	* * 선언 (Declaration)과 정의 (Definition)을 분리하기 때문에 생길 수도 있는 것
	 
	* 컴파일 에러 (Syntax Error)가 아닌 Linking Error가 발생하는 이유
	* * 컴파일러는 사용되는 함수의 프로토 타입을 선언한 Forward Declaration만 확인이 되면 빌드를 진행함
	* * 그러나 그게 실제로 어떻게 작동하는지에 대한 몸체가 없으면, 즉 정의되지 않으면 
	* * Linking 할 때, 몸체를 못찾아서 Linking Error가 발생하는 것
*/



#include <iostream>
#include "doSomething.h"
/*
	#include "multiply.h"
	->
	int multiply(int a, int b)
	{
		return a + b;
	}

	void doSomething()
	{
		multiply(1, 2);
	}
*/

//#include "multiply.h"
/*
	int multiply(int a, int b)
	{
		return a + b;
	}
*/

/*
	* Header Guards (== Include Guards)
	* 헤더가드가 없는 경우 발생하는 문제 -> 함수가 중복되어 정의되는 경우 링킹 에러가 발생함
	* 따라서 정의가 중복되는 경우 한 번만 정의되면 된다고 알려주면 됨 -> pragma once
	
	* 위의 예에서 (pragma once를 주석처리 해둔 상태) 링킹 에러가 발생하는 이유
	* * 헤더파일을 불러오는 것은 사실 그 안에 포함된 내용을 그대로 불러오는 것과 같음
	* * 즉 main 파일에서 doSomething.h와 multiply.h를 둘 다 include 했다면 
	* * doSomething 헤더 파일 내부에 이미 multiply 헤더 파일이 include 되었기 때문에 
	* * main 파일에서는 #include "doSomething.h"에서 한 번, 
	* * #include "multiply.h"에서 한 번, 총 두 번으로 multiply 함수가 중복 정의되어버림
	* * 그래서 링킹 에러가 발생함 -> 따라서 main 파일에서든 doSomehting 헤더파일에서든
	* * #include "multiply.h" 를 하나는 제거해줘야 링킹 에러가 발생하지 않음
	
	* * 그러나 이러한 중복 정의를 막아주는 것이 헤더가드 #pragma once ("중복될 경우 한 번만 정의해라")
*/


int main1_12()
{
	doSomething();

	return 0;
}
