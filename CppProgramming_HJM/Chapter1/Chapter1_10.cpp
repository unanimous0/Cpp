/*
	Chapter 1    C++�� �������� ����
	Chapter 1.10 ���� (Declaration)�� ���� (Definition) �� �и�
*/

#include <iostream>

// Declaration
// �Է� (int a, int b)�� ��� (��ȯ���� int)�� ���� �ּ����� ������ (����) ������ ���ش�.
// ���� ��� ���࿡ ���� ���Ǵ� �ؿ��� ���� (Definition)
int add1(int a, int b);		// Forward Declaration
int subtract1(int a, int b);
int multiply1(int a, int b);

/*
	* main �Լ��� �� ������ ���� ��� indentifier�� ã�� ���ϴ� ������ ���� �߻�
	* �����Ϸ��� ������� �б� ���� -> ���� main ���� ������ ���ش�. (�����Ϸ����� �̸� �˷���)
*/

int main1_10()
{

	std::cout << add1(1, 2) << std::endl;

	std::cout << subtract1(1, 2) << std::endl;

	std::cout << multiply1(1, 2) << std::endl;

	/*
		* ���� �Լ��� ��Ŭ���ϸ� ����� ���Ƿ� �̵� ����
		* �� ��Ŭ���ϸ� Peek Defintion�� ������ �ٷ� ���ǰ� ���̴µ�, ���ǰ� ���� ���� ���� �������� ���� ��� ������
	*/


	return 0;
}

// Definition
int add1(int a, int b)
{
	return a + b;
}

// Definition
int subtract1(int a, int b)
{
	return a - b;
}

// Definition
int multiply1(int a, int b)
{
	return a * b;
}
