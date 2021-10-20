/*
	Chapter 2   ������ �⺻ �ڷ���
	Chapter 2.1 �⺻ �ڷ��� �Ұ�
*/

#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	int j = 3;
	int i = -1;
	int k = 123;
	char a = 'H';

	cout << (uintptr_t)static_cast<void*>(&a) << endl;
	cout << (uintptr_t)static_cast<void*>(&i) << endl;


	bool bValue1 = true;					// true -> 1 (���������� true�� ���� 1�� ������)
	bool bValue2 = false;					// false ->0 (���������� false�� ���� 0���� ������)

	cout << (bValue1 ? 1 : 0) << endl;

	char chValue = 'A';

	cout << chValue << endl;
	cout << int(chValue) << endl;			// A�� �����Ǵ� ���� 65�� ��µ�

	char chValueNum = 65;

	cout << chValueNum << endl;				// char(65) �̹Ƿ� 65�� �ش��ϴ� A�� ��µ�

	float fValue = 3.141592f;				// float�� ��� ���� �ڿ� f�� �ٿ��� -> f���� ������ (f������ double�� �ν��ϱ� ����)
	double dValue = 3.141592;				// double�� ��� ���� �ڿ� �ƹ��͵� ������ ���� (double�� float�� �ι��̹Ƿ� �� ������)

	cout << fValue << endl;					// ����ϸ� ���� ©�� (3.14159������ ��µ�)
	cout << dValue << endl;					// cout���� ����� �� �ڸ� ���� �����ִٺ��� ©�� ��
											// ���������� 3.141592�� ��Ȯ���� �������� �Ǽ��� ǥ���ϴ� ������ �ٲ㼭 �����ϰ� ����

	auto aValue1 = 3.141592f;				// ���̽�ó�� �������� �� Ÿ���� ������
	auto aValue2 = 3.141592;				// �����ϰ� ������ ���콺�� ���ٴ�� Ÿ���� ��	

	cout << aValue1 << endl;
	cout << aValue2 << endl;

	return 0;
}