/*
	Chapter 1    C++�� �������� ����
	Chapter 1.13 ���ӽ����̽� (Namespace)
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
	namespace InnerSpace							// NP�ȿ� NP�� ���� �� ����
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
	* <iostream> �� std namespace
	* * <iostream> ���� �ȿ��� cout, cin, endl ���� std namespace �ȿ� ���ǵǾ� ���� (iostram -> std namespace -> cout, cin, endl)
	* * <iostream> ������ �̵��ϸ� �ش� �Լ����� _STD_BEGIN�� _STD_END ��ũ�ε�� �������ְ� �� �ȿ� ���ǵǾ�����
	* * * �ش� ��ũ�δ� �츮�� ������ ������ namespace MySpace1 {}�� ���Ŷ('{}')��� ����
*/


int main()
{
	cout << MySpace1::doSomething(4, 3) << endl << endl;	// 4 + 3 = 7�� �����

	cout << MySpace2::doSomething(4, 3) << endl << endl;	// 4 - 3 = 1�� �����

	cout << doSomething(4, 3) << endl << endl;				// 4 * 3 = 12�� �����
															// ���� ��� Namespace Ex 3, �� namespace�� ���� doSomething�� ���ǵ��� ���� ��Ȳ����
															// �׳� doSomething�� ȣ���ϸ� �ĺ���(Indentifier)�� ã�� �� ���ٴ� ������ �߻��� 
															// -> Namespace�� ���ǵ� �Լ��� ȣ���Ϸ��� Namespace�� �ʿ���

	using namespace MySpace1;
	// cout << doSomething(4, 3) << endl<< endl;			// �̷��� �� ��� ���� �߻� -> NS1 doSomething�� �Ϲ� doSomehting�� �ߺ���

	using namespace MySpace4;
	cout << doAnything(4, 3) << endl << endl;

	cout << MySpace5::doSomething(4, 3) << endl << endl;
	cout << MySpace5::InnerSpace::my_function(4, 3) << endl << endl;

	using namespace MySpace5::InnerSpace;
	cout << my_function(4, 3) << endl << endl;

	return 0;
}


