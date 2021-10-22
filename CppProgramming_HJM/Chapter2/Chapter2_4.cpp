/*
	Chapter 2   변수의 기본 자료형
	Chapter 2.4 무치형 (Void)
*/

#include <iostream>

void my_function(void)
{

}

int main2_4()
{

	int i = 123;
	float f = 123.456f;

	//void my_void1;		      // void는 메모리를 차지하지 않기 때문에 변수 선언을 할 수 없음

	void* my_void2;			      // 포인터 변수로는 만들 수 있음 (주소값을 가짐)
	void* my_void3;

	my_void2 = (void*)&i;	    // 정수형 변수의 주소값 &i
	my_void3 = (void*)&f;	    // 실수형 변수의 주소값 &f

	std::cout << &i << std::endl;
	std::cout << &f << std::endl << std::endl;

	std::cout << my_void2 << std::endl;
	std::cout << my_void3 << std::endl;

	/*
		* 포인터 타입 캐스팅 
		* * 데이터 타입에 따라 메모리에서 차지하는 크기가 다름
		* * 그런데 데이터 타입과 사이즈가 달라도 각 데이터가 차지하는 메모리의 주소값 형식은 같음 (주소를 표현하는 데이터 양은 동일함) (주소의 데이터 타입이 동일하다?)
		* * 따라서 정수형 변수의 주소값이든 실수형 변수의 주소값이든 void 포인터 타입으로 캐스팅 할 수 있음
		* * 다시 정수형 주소 타입, 실수형 주소 타입으로 캐스팅하기도 함
	*/

	return 0;
}
