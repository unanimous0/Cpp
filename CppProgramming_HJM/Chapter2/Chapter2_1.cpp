/*
	Chapter 2   변수의 기본 자료형
	Chapter 2.1 기본 자료형 소개
*/

#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	int j = 3;
	int i = -1;
	int k = 123;
	char a = 'H';

	cout << (uintptr_t)static_cast<void*>(&a) << endl;
	cout << (uintptr_t)static_cast<void*>(&i) << endl;


	bool bValue1 = true;					// true -> 1 (내부적으로 true를 숫자 1로 저장함)
	bool bValue2 = false;					// false ->0 (내부적으로 false를 숫자 0으로 저장함)

	cout << (bValue1 ? 1 : 0) << endl;

	char chValue = 'A';

	cout << chValue << endl;
	cout << int(chValue) << endl;			// A에 대응되는 숫자 65가 출력됨

	char chValueNum = 65;

	cout << chValueNum << endl;				// char(65) 이므로 65에 해당하는 A가 출력됨

	float fValue = 3.141592f;				// float의 경우 숫자 뒤에 f를 붙여줌 -> f빼면 오류남 (f없으면 double로 인식하기 때문)
	double dValue = 3.141592;				// double의 경우 숫자 뒤에 아무것도 붙이지 않음 (double이 float의 두배이므로 더 정밀함)

	cout << fValue << endl;					// 출력하면 값이 짤림 (3.14159까지만 출력됨)
	cout << dValue << endl;					// cout에서 출력할 때 자릿 수를 맞춰주다보니 짤린 것
											// 내부적으로 3.141592를 정확히게 이진수로 실수를 표현하는 법으로 바꿔서 저장하고 있음

	auto aValue1 = 3.141592f;				// 파이썬처럼 컴파일할 때 타입이 결정됨
	auto aValue2 = 3.141592;				// 빌드하고 변수에 마우스를 갖다대면 타입이 뜸	

	cout << aValue1 << endl;
	cout << aValue2 << endl;

	return 0;
}