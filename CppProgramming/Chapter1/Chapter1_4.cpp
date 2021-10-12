/*
	Chapter 1   C++�� �������� ����
	Chapter 1.4 ����� ��Ʈ�� cin, cout
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
	std::cout << "pi is " << pi << std::endl;				// 3.14159���� ©�� -> ���е� ���� �ʿ�

	std::cout << "abc" << "\t" << "def" << std::endl;		// '\t' -> tab
	std::cout << "ab" << "\t" << "cdef" << std::endl;		// '\t' -> �ڵ����� �ٸ��� ���� -> ��� �� ����� �ΰ� �ٸ����� ���� �� ���

	std::cout << "hello world 3\n\n";						// '\n' -> endl�� ����� ��� ���� (������ ����)


	using namespace std;									// �� ���� �ڷ� �߰�ȣ�� ������ �������� std ���� �ʾƵ� ��
	cout << "hello world 4" << endl;						// �����Ϸ��� cout, endl�� ���� �� std��� namespace���� �˾Ƽ� ã�Ƽ� ������ ����

	cout << "\a" << endl;									// '\a' -> �Ҹ� ��� (audio)

	// cout�� ����� printf 



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