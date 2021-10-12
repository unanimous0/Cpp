/*
	Chapter 1   C++�� �������� ����
	Chapter 1.5 �Լ�
*/

#include <iostream>

using namespace std;

void print()
{
	cout << "Hello" << endl;
}

// �Լ��� ��Ŭ�� Rename -> �ش� �Լ��� �Լ� ��� �ڵ忡�� �Լ����� �ڵ����� �ٲ���
int addTwoNumbers(int num_a, int num_b)		// Parameters 
{
	int sum = num_a + num_b;

	print();		
	
	/*
	* Python�� �ٸ��� c++�� �Լ� �ȿ��� �Լ��� ������ �� ���� -> ���Ǳ� ���� ���� �Ǿ�� �� (������ nested line����.)
	* (��, nested class�� ������)
	
		void print()
		{
			cout << "Hello 2" << endl;
		}
	*/
					
	return sum;
}

// �Լ��� ��Ŭ�� Rename -> �ش� �Լ��� �Լ� ��� �ڵ忡�� �Լ����� �ڵ����� �ٲ���
void printHellowWorld()
{
	cout << "HelloWorld" << endl;

	//return;		// return �Ұ� ���� ��� �ƹ� �͵� ���� �ʰų�, return; �� ���ų� �� �� ����
}

int main1_5()
{
	cout << addTwoNumbers(1, 2) << endl;	// Arguments
	cout << addTwoNumbers(3, 4) << endl;


	printHellowWorld();

	return 0; 
}