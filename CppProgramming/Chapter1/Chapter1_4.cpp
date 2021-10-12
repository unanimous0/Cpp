/*
	Chapter 1   C++의 기초적인 사용법
	Chapter 1.4 입출력 스트림 cin, cout
*/

#include <iostream>		// cout, cin, endl, ...
#include <cstdio>

int main1_4()
{
	// 1. Console Out (cout)

	std::cout << "hello world 1";
	std::cout << "hello world 2" << std::endl;				// '<<':  output operator

	int x = 1024;
	std::cout << "x is " << x << std::endl;
	
	double pi = 3.141592;
	std::cout << "pi is " << pi << std::endl;				// 3.14159에서 짤림 -> 정밀도 조정 필요

	std::cout << "abc" << "\t" << "def" << std::endl;		// '\t' -> tab
	std::cout << "ab" << "\t" << "cdef" << std::endl;		// '\t' -> 자동으로 줄맞춤 해줌 -> 출력 시 빈공간 두고 줄맞춤을 원할 때 사용

	std::cout << "hello world 3\n\n";						// '\n' -> endl과 비슷한 기능 수행 (같지는 않음)


	using namespace std;									// 이 문장 뒤로 중괄호가 끝나는 곳까지는 std 쓰지 않아도 됨
	cout << "hello world 4" << endl;						// 컴파일러가 cout, endl을 만날 때 std라는 namespace에서 알아서 찾아서 컴파일 해줌

	cout << "\a" << endl;									// '\a' -> 소리 출력 (audio)

	// cout과 비슷한 printf 



	// 2. Console In (cin)
	int y;
	cin >> y;			// '>>' -> Input Operator

	cout << "Your input is " << y << endl;

	int z = 1;
	cout << "Before your input, z was " << z << endl;
	cin >> z;
	cout << "Your input is " << z << endl;

	return 0;
}