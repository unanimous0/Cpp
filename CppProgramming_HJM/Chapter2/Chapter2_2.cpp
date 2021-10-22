/*
	Chapter 2   변수의 기본 자료형
	Chapter 2.2 정수형 (Integers)
*/

#include <iostream>
#include <math.h>
#include <limits>

int main2_2()
{
	short		s = 1;
	int			i = 1;
	long		l = 1;
	long long	ll = 1;

	std::cout << "short     size: " << sizeof(short) << " Bytes" << std::endl;		// 2 Bytes (16 Bits)
	std::cout << "int       size: " << sizeof(int) << " Bytes" << std::endl;		// 4 Bytes (32 Bits)
	std::cout << "long      size: " << sizeof(long) << " Bytes" << std::endl;		// 4 Bytes (32 Bits)
	std::cout << "long long size: " << sizeof(long long) << " Bytes" << std::endl;	// 8 Bytes (64 Bits)

	// 표현 가능한 수
	std::cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << std::endl;				// 부호 때문에 1 빼주고, 0 때문에 1 빼줌
	std::cout << std::numeric_limits<short>::max() << std::endl;
	std::cout << std::numeric_limits<short>::min() << std::endl;
	std::cout << std::numeric_limits<short>::lowest() << std::endl;


	// Overflow
	short max_s = 32767;
	max_s += 1;
	std::cout << "Expected Value: 32768" << std::endl;			// 기대값: 32,768
	std::cout << "Real Value: " << max_s << std::endl;			// 실제값: -32,768 -> Overflow 현상 -> 뒤로 돌아가서 오히려 가장 작은 수가 출력되는 것

	short min_s = std::numeric_limits<short>::min();
	min_s -= 1;
	std::cout << "Expected Value: -32768" << std::endl;			// 기대값: -32,769
	std::cout << "Real Value: " << min_s << std::endl;			// 실제값: 32,767 -> Overflow 현상 -> 앞으로 돌아가서 오히려 가장 큰 수가 출력되는 것

	// (un)signed Overflow
	unsigned int ui = -1;						// 부호 없는 타입의 int에 음수를 넣음
	std::cout << ui << std::endl;				// Overflow가 발생하여 앞으로 돌아가서 오히려 가장 큰 수를 출력함 
												// -> 문제: 컴파일러가 자동으로 값을 바꾸고 경고 뿐만 아니라 에러도 발생시키지 않음


	int i2 = 20 / 4;							// 5가 출력되며 문제 없음
	int i3 = 23 / 4;							// 5가 출력되며 소수점을 버림 (반올림 아님)
	std::cout << i3 << std::endl;
	std::cout << (float)23 / 4 << std::endl;	// 5.75가 출력됨 -> (float)으로 정수 23을 소수 23으로 캐스팅
												// 연산에서 float와 int로 연산하면 결과를 float로 나타냄

	return 0;
}
