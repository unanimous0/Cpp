/*
	Chapter 1   C++의 기초적인 사용법
	Chapter 1.6 키워드와 식별자(Identifier) 이름 짓기
*/

void getNumber()		// 함수명: 동사 + 명사 & 소문자+대문자(getNumber) or 대문자+대문자(GetNumber)
{						// 함수명이 길어질 것 같으면, 주석을 달아라

}

class MyClass
{
public:
	int m_variable;		// 클래스 안의 멤버 변수임을 나타내기 위해 m을 붙이는 경우도 있음 
	int _variable;
	int variable_;		// 구글 스타일?
	int variable;
};

int main1_6()
{
	int n_apples, n_oranges;	// 숫자와 . 등으로 시작 불가 & 공백 불가

	int VALUE;					// 대문자 -> 매크로에 사용 (but 대문자 잘 안씀)

	int _apples;				// 시스템 프로그래밍하는 개발자들이 주로 쓰던 방식
								// 또는 클래스의 멤버를 '_' 로 구분하는 개발자도 존재

	return 0;
}