#include <iostream>
using namespace std;

void doSomething2()
{
#ifdef LIKE_APPLE						
	cout << "doSomething2 Apple" << endl;			
#else									
	cout << "doSomething2 Orange" << endl;		// #define LIKE_APPLE ��ũ�δ� �ٸ� cpp ���Ͽ� ���ǵǾ� �����Ƿ�
#endif											// �� ���Ͽ����� ��ũ�ΰ� ���ǵ��� �ʾҴٰ� �Ǵ��� -> �׷��� Orange ���
}