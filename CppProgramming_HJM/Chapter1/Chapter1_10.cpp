/*
	Chapter 1    C++의 기초적인 사용법
	Chapter 1.10 선언 (Declaration)과 정의 (Definition) 의 분리
*/

#include <iostream>

// Declaration
// 입력 (int a, int b)과 출력 (반환형이 int)에 대한 최소한의 정보로 (전방) 선언을 해준다.
// 실제 기능 수행에 대한 정의는 밑에서 진행 (Definition)
int add1(int a, int b);		// Forward Declaration
int subtract1(int a, int b);
int multiply1(int a, int b);

/*
	* main 함수가 맨 앞으로 오는 경우 indentifier를 찾지 못하는 컴파일 에러 발생
	* 컴파일러가 순서대로 읽기 때문 -> 따라서 main 위에 선언을 해준다. (컴파일러에게 미리 알려줌)
*/

int main1_10()
{

	std::cout << add1(1, 2) << std::endl;

	std::cout << subtract1(1, 2) << std::endl;

	std::cout << multiply1(1, 2) << std::endl;

	/*
		* 사용된 함수를 우클릭하면 선언과 정의로 이동 가능
		* 또 우클릭하면 Peek Defintion을 누르면 바로 정의가 보이는데, 정의가 같은 파일 내에 존재하지 않을 경우 유용함
	*/


	return 0;
}

// Definition
int add1(int a, int b)
{
	return a + b;
}

// Definition
int subtract1(int a, int b)
{
	return a - b;
}

// Definition
int multiply1(int a, int b)
{
	return a * b;
}
