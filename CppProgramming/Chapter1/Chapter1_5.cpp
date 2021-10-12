/*
	Chapter 1   C++의 기초적인 사용법
	Chapter 1.5 함수
*/

#include <iostream>

using namespace std;

void print()
{
	cout << "Hello" << endl;
}

// 함수명 우클릭 Rename -> 해당 함수와 함수 사용 코드에서 함수명을 자동으로 바꿔줌
int addTwoNumbers(int num_a, int num_b)		// Parameters 
{
	int sum = num_a + num_b;

	print();		
	
	/*
	* Python과 다르게 c++은 함수 안에서 함수를 정의할 수 없음 -> 사용되기 전에 정의 되어야 함 (동일한 nested line에서.)
	* (단, nested class는 가능함)
	
		void print()
		{
			cout << "Hello 2" << endl;
		}
	*/
					
	return sum;
}

// 함수명 우클릭 Rename -> 해당 함수와 함수 사용 코드에서 함수명을 자동으로 바꿔줌
void printHellowWorld()
{
	cout << "HelloWorld" << endl;

	//return;		// return 할게 없는 경우 아무 것도 쓰지 않거나, return; 만 쓰거나 할 수 있음
}

int main1_5()
{
	cout << addTwoNumbers(1, 2) << endl;	// Arguments
	cout << addTwoNumbers(3, 4) << endl;


	printHellowWorld();

	return 0; 
}
