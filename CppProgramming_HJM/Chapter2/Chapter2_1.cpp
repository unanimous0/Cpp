/*
	Chapter 2   변수의 기본 자료형
	Chapter 2.1 기본 자료형 소개
*/

#include <iostream>
#include <bitset>

int main2_1()
{
	using namespace std;

	int j = 3;
	int i = -1;
	int k = 123;
	char ch = 'H';

	cout << (uintptr_t)static_cast<void*>(&ch) << endl;
	cout << (uintptr_t)static_cast<void*>(&i) << endl;


	bool bValue1 = true;					// true -> 1 (내부적으로 true를 숫자 1로 저장함)
	bool bValue2 = false;					// false -> 0 (내부적으로 false를 숫자 0으로 저장함)

	cout << (bValue1 ? 1 : 0) << endl;

	char chValue = 'A';

	cout << chValue << endl;
	cout << int(chValue) << endl;				// A에 대응되는 숫자 65가 출력됨

	char chValueNum = 65;

	cout << chValueNum << endl;				// char(65) 이므로 65에 해당하는 A가 출력됨

	float fValue = 3.141592f;				// float의 경우 숫자 뒤에 f를 붙여줌 -> f빼면 오류남 (f없으면 double로 인식하기 때문)
	double dValue = 3.141592;				// double의 경우 숫자 뒤에 아무것도 붙이지 않음 (double이 float의 두배이므로 더 정밀함)

	cout << fValue << endl;					// 출력하면 값이 짤림 (3.14159까지만 출력됨)
	cout << dValue << endl;					// cout에서 출력할 때 자릿 수를 맞춰주다보니 짤린 것
								// 내부적으로 3.141592를 정확히게 이진수로 실수를 표현하는 법으로 바꿔서 저장하고 있음

	auto aValue1 = 3.141592f;				// 파이썬처럼 컴파일할 때 타입이 결정됨
	auto aValue2 = 3.141592;				// 빌드하고 변수에 마우스를 갖다대면 타입이 뜸	

	cout << sizeof(aValue1) << " Bytes" << endl;		// 바이트 단위의 크기가 나옴
	cout << sizeof(aValue2) << " Bytes" << endl;

	cout << sizeof(bool) << " Bytes" << endl;		// sizeof() 함수는 타입을 넣어도 크기가 나옴
	cout << sizeof(char) << " Bytes" << endl;
	cout << sizeof(float) << " Bytes" << endl;
	cout << sizeof(double) << " Bytes" << endl;


	// 초기화 방식
	int a = 123;			// copying initialization
	int b(123);			// direct initialization		-> 객체지향에서 직접만든 타입을 초기화할 때 많이 사용
	int c{ 123 };			// uniform initialization		-> 객체지향에서 직접만든 타입을 초기화할 때 많이 사용 (최근에는 uniform을 선호)

	// uniform을 선호하는 이유 -> 더 엄격함 (아래 예시 참고)
	int aa = 1.23;			// warning이 뜨지만 인위적 캐스팅을 진행해 실행은 됨 -> Possible loss of data (데이터 타입의 사이즈에 따라 정밀도가 달라질 수 있음)
	int bb(1.23);			// warning이 뜨지만 인위적 캐스팅을 진행해 실행은 됨 -> Possible loss of data (데이터 타입의 사이즈에 따라 정밀도가 달라질 수 있음)
	//int cc{ 1.23 };		// error가 뜨면서 실행이 안됨


	// 여러 변수 동시 선언
	//int k, l;					// 같은 데이터타입만 가능
	int kk, ll = 123;				// ll변수만 123으로 초기화  -> 추천하지 않는 방식
	int kkk, lll = 123, mmm = 456;			// kkk만 초기화 되지 못함   -> 추천하지 않는 방식
	int kkkk = 123, llll(456), mmmm{ 789 };		// 각각의 방식으로 초기화 됨 -> 추천하지 않는 방식
	//cout << kk << endl;				// "Uninitialized local variable 'kk' used" 에러 발생
	cout << ll << endl;


	return 0;
}
