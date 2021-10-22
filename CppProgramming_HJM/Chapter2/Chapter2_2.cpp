/*
	Chapter 2   ������ �⺻ �ڷ���
	Chapter 2.2 ������ (Integers)
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

	// ǥ�� ������ ��
	std::cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << std::endl;				// ��ȣ ������ 1 ���ְ�, 0 ������ 1 ����
	std::cout << std::numeric_limits<short>::max() << std::endl;
	std::cout << std::numeric_limits<short>::min() << std::endl;
	std::cout << std::numeric_limits<short>::lowest() << std::endl;


	// Overflow
	short max_s = 32767;
	max_s += 1;
	std::cout << "Expected Value: 32768" << std::endl;			// ��밪: 32,768
	std::cout << "Real Value: " << max_s << std::endl;			// ������: -32,768 -> Overflow ���� -> �ڷ� ���ư��� ������ ���� ���� ���� ��µǴ� ��

	short min_s = std::numeric_limits<short>::min();
	min_s -= 1;
	std::cout << "Expected Value: -32768" << std::endl;			// ��밪: -32,769
	std::cout << "Real Value: " << min_s << std::endl;			// ������: 32,767 -> Overflow ���� -> ������ ���ư��� ������ ���� ū ���� ��µǴ� ��

	// (un)signed Overflow
	unsigned int ui = -1;						// ��ȣ ���� Ÿ���� int�� ������ ����
	std::cout << ui << std::endl;				// Overflow�� �߻��Ͽ� ������ ���ư��� ������ ���� ū ���� ����� 
												// -> ����: �����Ϸ��� �ڵ����� ���� �ٲٰ� ��� �Ӹ� �ƴ϶� ������ �߻���Ű�� ����


	int i2 = 20 / 4;							// 5�� ��µǸ� ���� ����
	int i3 = 23 / 4;							// 5�� ��µǸ� �Ҽ����� ���� (�ݿø� �ƴ�)
	std::cout << i3 << std::endl;
	std::cout << (float)23 / 4 << std::endl;	// 5.75�� ��µ� -> (float)���� ���� 23�� �Ҽ� 23���� ĳ����
												// ���꿡�� float�� int�� �����ϸ� ����� float�� ��Ÿ��

	return 0;
}
