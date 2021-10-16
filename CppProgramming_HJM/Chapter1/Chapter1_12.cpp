/*
	Chapter 1    C++�� �������� ����
	Chapter 1.12 ��ŷ ���� (Linking Error) & ��� ���� (Header Guards)
*/

/*
	* Linking Error
	* ��������� ���� �� Linking Error�� �߻��ϴ� ����
	* * ���� (Declaration)�� ���� (Definition)�� �и��ϱ� ������ ���� ���� �ִ� ��
	 
	* ������ ���� (Syntax Error)�� �ƴ� Linking Error�� �߻��ϴ� ����
	* * �����Ϸ��� ���Ǵ� �Լ��� ������ Ÿ���� ������ Forward Declaration�� Ȯ���� �Ǹ� ���带 ������
	* * �׷��� �װ� ������ ��� �۵��ϴ����� ���� ��ü�� ������, �� ���ǵ��� ������ 
	* * Linking �� ��, ��ü�� ��ã�Ƽ� Linking Error�� �߻��ϴ� ��
*/



#include <iostream>
#include "doSomething.h"
/*
	#include "multiply.h"
	->
	int multiply(int a, int b)
	{
		return a + b;
	}

	void doSomething()
	{
		multiply(1, 2);
	}
*/
//#include "multiply.h"
/*
	int multiply(int a, int b)
	{
		return a + b;
	}
*/

/*
	* Header Guards (== Include Guards)
	* ������尡 ���� ��� �߻��ϴ� ���� -> �Լ��� �ߺ��Ǿ� ���ǵǴ� ��� ��ŷ ������ �߻���
	* ���� ���ǰ� �ߺ��Ǵ� ��� �� ���� ���ǵǸ� �ȴٰ� �˷��ָ� �� -> pragma once
	
	* ���� ������ (pragma once�� �ּ�ó�� �ص� ����) ��ŷ ������ �߻��ϴ� ����
	* * ��������� �ҷ����� ���� ��� �� �ȿ� ���Ե� ������ �״�� �ҷ����� �Ͱ� ����
	* * �� main ���Ͽ��� doSomething.h�� multiply.h�� �� �� include �ߴٸ� 
	* * doSomething ��� ���� ���ο� �̹� multiply ��� ������ include �Ǿ��� ������ 
	* * main ���Ͽ����� #include "doSomething.h"���� �� ��, 
	* * #include "multiply.h"���� �� ��, �� �� ������ multiply �Լ��� �ߺ� ���ǵǾ����
	* * �׷��� ��ŷ ������ �߻��� -> ���� main ���Ͽ����� doSomehting ������Ͽ�����
	* * #include "multiply.h" �� �ϳ��� ��������� ��ŷ ������ �߻����� ����
	
	* * �׷��� �̷��� �ߺ� ���Ǹ� �����ִ� ���� ������� #pragma once ("�ߺ��� ��� �� ���� �����ض�")
*/


int main()
{
	doSomething();

	return 0;
}