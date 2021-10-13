/*
  C++ 헤더파일 만들기
*/

# 1. 헤더파일 사용하지 않는 경우
#include <iostream>

using namespace std;

class calculator
{
  public: void add()
  {
    int a, b;
    cout << "a와 b를 차례대로 입력하세요." << endl;
    cin >> a >> b;
    cout << "결과: " << a + b << endl;
  }
  public: void subtract()
  {
    int a, b;
    cout << "a와 b를 차례대로 입력하세요." << endl;
    cin >> a >> b;
    cout << "결과: " << a - b << endl;
  }
};

int main()
{
 calculator c;
  c.add();
  c.subtract();
  system("pause");
  
  return 0;
}



# 2. 헤더파일 사용하는 경우
