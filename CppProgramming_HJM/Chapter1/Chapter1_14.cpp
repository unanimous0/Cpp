/*
	Chapter 1    C++의 기초적인 사용법
	Chapter 1.14 전처리기 (Preprocessor)
	> Defines the entry point for the console application.
	> '#'은 전처리기 -> 빌드 들어가기 전에 수행됨
	> 참고로 #pragma once가 정석보다 유용한 점 중 하나는 빌드 전 해당 파일을 실행하지 않아도 되는 효율성임
*/

#include <iostream>
#include <algorithm>
using namespace std;

// 요즘에는 매크로는 잘 쓰지 않고 함수를 사용함
#define MY_NUMBER 9							            // 매크로: 대부분 대문자로 작성 -> 코드에서 MY_NUMBER를 만나면 그 뒤의 값으로 교체하는 역할
#define MY_STRING "Hello, World"			      // 매크로의 값이 변경되는 경우, 매크로도 코드 안에 있는 것이기 때문에 값이 바뀌면 빌드를 다시 진행함

#define MAX(a, b) ((a>b) ? a : b)
#define MIN(a, b) (((a)<(b)) ? (a) : (b))	  // 인자 a, b로 오는 값이 어떻게 올지 모르고 에러가 날 수 있으므로, ()로 감싸주는 것이 안정적

#define LIKE_APPLE							

void doSomething1()
{
	#ifdef LIKE_APPLE						              // 위에서 정의한 LIKE_APPLE 매크로는 Chapter1_14.cpp 파일에서 정의했으므로
	cout << "doSomething1 Apple" << endl;	    // 이 파일 안에서만 적용됨 -> 따라서 함수 안에서도 매크로 사용 가능
	#else									                    // 단, 이 함수가 다른 cpp 파일에 있을 경우 매크로 사용 불가 -> macro_check.cpp 파일 확인
	cout << "doSomething1 Orange" << endl;
	#endif
}

void doSomething2();						            // macro_check.cpp 파일에 정의되어 있음

int main()
{
	cout << MY_NUMBER << endl;
	cout << MY_STRING << endl;
	cout << MAX(10, 20) << endl;
	cout << MIN(7 + 3, 20) << endl;


	#include <algorithm>					            // 이 위치에 헤더파일을 include 해오면 에러 발생

	cout << std::max(1 + 3, 2) << endl;		    // max라는 함수가 algorithm이라는 헤더파일의 std 네임스페이스 안에 정의된 것
											                      // std 네임스페이스가 <iostream>에만 있는 것이 아니고 어느 헤더 파일 내에서
                                            // std 네임스페이스를 만들었으면 그 안에 정의된 함수 등을 std::를 통해서 사용할 수 있는 것
                                            // -> 이러한 이유로 using namespace std; 는 구분되도록 {} 안에서 사용하는 것이 좋다?


	// 전처리기 & 매크로를 이용해 Conditional Compliation (조건에 따른 컴파일)을 다른 방식으로 수행하는 방법
	#ifdef LIKE_APPLE						              // '#'은 전처리기 -> 빌드 들어가기 전에 수행됨
		cout << "Apple" << endl;			          // LIKE_APPLE 매크로가 정의되어 있으므로 해당 코드가 실행됨
	#endif

	#ifndef LIKE_APPLE						            // LIKE_APPLE 매크로가 정의되어 있지 않은 경우에만 해당 코드가 실행되기 때문에
		cout << "Orange" << endl;			          // Orange는 출력되지 않음
	#endif


	// 전처리기 표현만 다를 뿐 위와 같음 (if ~ else)
	#ifdef LIKE_APPLE						              // 매크로는 값의 교체라 했는데 매크로 정의 부분에는 값이 없음
		cout << "Apple" << endl;			          // 그럼 공백이랑 교환하는 건가 -> 그렇지 않음
	#else									                    // 매크로가 전처리기(#)이 있는 라인에서는 교체하지 않음
		cout << "Orange" << endl;			          // ifdef의 의미대로 정의 되었는지의 여부를 확인하면 됨
	#endif

	doSomething1();							              // Apple이 출력됨

	doSomething2();							              // Apple이 아닌 Orange가 출력됨
                                            // 위에 정의된 #define 매크로의 범위는 해당 매크로가 정의되어있는 cpp 파일 범위 내에 한정됨
                                            // 그러나 doSomething2라는 함수의 정의/Body는 다른 cpp 파일에 있음
                                            // 따라서 #define LIKE_APPLE 매크로의 범위가 다른 cpp 파일까지 영향을 줄 수 없어 Orange가 출력된 것
	return 0;
}
