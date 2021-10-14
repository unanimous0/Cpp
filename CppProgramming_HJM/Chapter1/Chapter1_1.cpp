/*
	Chapter 1   C++의 기초적인 사용법
	Chapter 1.1 프로그램의 구조
*/

#include <iostream>		// Preprocessor Directive (전처리기)

int main1_1(void)
{
	int x = 2;
	x = 5;
	int y = x + 3;

	std::cout << y << std::endl;

	return 0;
}

/*
	# iostream은 cout, cin, endl 등 기본 입출력과 관련된 객체들을 정의한 헤더파일
	# iostream은 "표준 라이브러리 디렉토리"에 존재함 
	## 표준 라이브러리는 컴파일러 제작사가 만들어서 "헤더파일을 이용해" 배포함
	
	# std:: -> 표준 라이브러리에 있는 변수나 함수는 std 표준 네임스페이스에 포함되어있음
	## 그래서 표준 라이브러리를 사용할 때는 std:: 접두어를 붙어야 함
*/
