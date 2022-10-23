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
	//void var_void;		      // void는 메모리를 차지하지 않기 때문에 변수 선언을 할 수 없음

	void* var_void;			      // 포인터 변수로는 만들 수 있음 (주소값을 가짐)

	
	int i = 123;
	float j = 123.456f;

	cout << &i << endl;         // 0x16b0ab30c		// 정수형 변수의 주소값 &i
	cout << &j << endl;         // 0x16b0ab308		// 실수형 변수의 주소값 &f

	void *my_void1;
	void *my_void2;

	cout << my_void1 << endl;   // 0x104d57cf4
	cout << my_void2 << endl;   // 0xa222800104e5ac80

	my_void1 = (void*)&i;
	my_void2 = (void*)&j;

	cout << my_void1 << endl;   // 0x16b0ab30c
	cout << my_void2 << endl;   // 0x16b0ab308

	/*
		* 포인터 타입 캐스팅 
		* * 데이터 타입에 따라 메모리에서 차지하는 크기가 다름
		* * 그런데 데이터 타입과 사이즈가 달라도 각 데이터가 차지하는 메모리의 주소값 형식은 같음 (주소를 표현하는 데이터 양은 동일함) (주소의 데이터 타입이 동일하다?)
		* * 따라서 정수형 변수의 주소값이든 실수형 변수의 주소값이든 void 포인터 타입으로 캐스팅 할 수 있음
		* * 다시 정수형 주소 타입, 실수형 주소 타입으로 캐스팅하기도 함
	*/

	return 0;
}
