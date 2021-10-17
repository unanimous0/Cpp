#include <iostream>
using namespace std;

void doSomething2()
{
#ifdef LIKE_APPLE						
	cout << "doSomething2 Apple" << endl;			
#else									
	cout << "doSomething2 Orange" << endl;		// #define LIKE_APPLE 매크로는 다른 cpp 파일에 정의되어 있으므로
#endif							// 이 파일에서는 매크로가 정의되지 않았다고 판단함 -> 그래서 Orange 출력
}
