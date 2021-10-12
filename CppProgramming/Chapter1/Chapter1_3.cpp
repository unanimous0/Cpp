/*
	Chapter 1   C++의 기초적인 사용법
	Chapter 1.3 변수 (Variables)
*/

/*
	1. 객체 (Objects)
		- 객체는 메모리에서 공간을 차지함

	2. 변수 (Variables)
		- 변수도 객체라고 할 수 있음

	3. L -values와 R-values (Left/Right)
		- 구분 기준: 메모리 주소를 프로그래머가 직접적으로 접근할 수 있는지의 여부

	4. 초기화 (Initialization)와 대입 (Assignment)

	5. 초기화를 안했을 때의 문제점
		- Debug 모드에서는 초기화 안한 경우 에러 메세지를 나타냄
		- Release 모드에서는 초기화 안한 경우 컴파일러가 임의로 값을 대입하여 에러를 없앰 (warning은 똑같이 뜸)
		- 메모리 공유로 인한 Garbage 문제 
*/

#include <iostream>

int main1_3()
{
	// X 라는 변수 이름이 가리키고 있는 메모리 공간에 123이라는 정수를 저장한다.
	int x = 123;	// Initialization
	x = 456;		// Assignment -> '=' 를 Assignment Operator 라고 함 

	std::cout << x << std::endl;		// 변수 x의 이름 (철수네 집)
	std::cout << &x << std::endl;		// 변수 x의 주소값 (한남더힐 A동 301호)

	int y;
	y = 789;
	y = y + 11;		// y+11도 R-value (y 있다고 L-value 아님 -> y가 가지고 있는 값이 R-value로서 사용되는 것)
	/*
		왼쪽에 있는 것 -> 변수 y가 L-value -> 메모리에 주소를 갖고 있는 것이 L-value (메모리에 주소를 가지고 있고 프로그래머가 직접 접근 가능함)
		오른쪽에 있는 것 -> R-value (메모리 어딘가에 임시로/휘발적으로 어딘가에 저장이 되긴 함)
	*/

	return 0;
}
