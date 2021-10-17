/*
	Chapter 1    C++의 기초적인 사용법
	Chapter 1.13 네임스페이스 (Namespace)
*/

#include <iostream>

// Namespace Ex 1
namespace MySpace1 
{
	int doSomething(int a, int b)
	{
		std::cout << "MySpace 1: ";	
		return a + b;
	}
}

// Namespace Ex 2
namespace MySpace2
{
	int doSomething(int a, int b)
	{
		std::cout << "MySpace 2: ";

		return a - b;
	}
}

 // Namespace Ex 3
int doSomething(int a, int b)
{
	std::cout << "MySpace 3: ";

	return a * b;
}

// Namespace Ex 4
namespace MySpace4
{
	int doAnything(int a, int b)
	{
		std::cout << "MySpace 4: ";

		return a / b;
	}
}

// Namespace Ex 5
namespace MySpace5
{
	namespace InnerSpace							// NP안에 NP를 넣을 수 있음
	{
		int my_function(int a, int b)
		{
			std::cout << "MySpace 5-1: ";

			return a + b * a;
		}
	}

	int doSomething(int a, int b)
	{
		std::cout << "MySpace 5-2: ";

		return a + b + a;
	}
}


using namespace std;
/*
	* <iostream> 과 std namespace
	* * <iostream> 파일 안에서 cout, cin, endl 등은 std namespace 안에 정의되어 있음 (iostram -> std namespace -> cout, cin, endl)
	* * <iostream> 문서로 이동하면 해당 함수들이 _STD_BEGIN과 _STD_END 매크로들로 감싸져있고 그 안에 정의되어있음
	* * * 해당 매크로는 우리가 위에서 정의한 namespace MySpace1 {}의 브라킷('{}')들과 같음
*/


int main1_13()
{
	cout << MySpace1::doSomething(4, 3) << endl << endl;			// 4 + 3 = 7이 실행됨

	cout << MySpace2::doSomething(4, 3) << endl << endl;			// 4 - 3 = 1이 실행됨

	cout << doSomething(4, 3) << endl << endl;				// 4 * 3 = 12가 실행됨
										// 예를 들어 Namespace Ex 3, 즉 namespace가 없는 doSomething이 정의되지 않은 상황에서
										// 그냥 doSomething을 호출하면 식별자(Indentifier)를 찾을 수 없다는 에러가 발생함 
										// -> Namespace에 정의된 함수를 호출하려면 Namespace가 필요함

	using namespace MySpace1;
	// cout << doSomething(4, 3) << endl<< endl;				// 이렇게 할 경우 에러 발생 -> NS1 doSomething과 일반 doSomehting이 중복됨

	using namespace MySpace4;
	cout << doAnything(4, 3) << endl << endl;

	cout << MySpace5::doSomething(4, 3) << endl << endl;
	cout << MySpace5::InnerSpace::my_function(4, 3) << endl << endl;

	using namespace MySpace5::InnerSpace;
	cout << my_function(4, 3) << endl << endl;

	return 0;
}
