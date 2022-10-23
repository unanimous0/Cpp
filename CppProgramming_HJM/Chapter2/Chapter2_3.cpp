/*
	Chapter 2   변수의 기본 자료형
	Chapter 2.3 고정 너비 정수 (Fixed-width Integers, C++ 11)
*/

#include <iostream>	
//#include <cstdint>		            // 사실 iostream에서 cstdint를 include 하고 있기 때문에 iostream을 불렀다면 안써도 됨

int main2_3()
{
	std::int16_t i(5);			// 16bits = 2Bytes -> 마우스 갖다 대면 typedef short 라고 뜸 (int 아님)
	std::int8_t myint = 65;		        //  8bits = 1Bytes -> 마우스 갖다 대면 typedef signed char 라고 뜸 (int 아님)

	std::cout << i << std::endl;
	std::cout << myint << std::endl;

	std::int_fast8_t fi(5);		        // 8Bits 사이즈 중에 가장 빠른 타입 -> typedef : signed char
	std::int_least64_t fl(5);	        // 적어도 8Bytes를 갖는 타입      -> typedef : long long

	std::cout << fi << std::endl;
	std::cout << fl << std::endl;
	
	
	
	int8_t  j = 65;
	int16_t i(5);

	cout << "int8_t  : " << sizeof(j) << endl;          // 1 Bytes
	cout << "int16_t : " << sizeof(i) << endl;          // 2 Bytes

	int_fast16_t k(20);
	int_fast32_t h(30);

	cout << "int_fast16_t  : " << sizeof(k) << endl;    // 2 Bytes
	cout << "int_fast32_t  : " << sizeof(h) << endl;    // 4 Bytes

	int_least32_t l(40);

	cout << "int_least32_t : " << sizeof(l) << endl;    // 4 Bytes

	return 0;
}
