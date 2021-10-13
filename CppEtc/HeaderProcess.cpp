/*
  C++ 헤더파일 만들기
*/

// 1. 헤더파일 사용하지 않는 경우 - 클래스의 객체를 사용

// main.cpp

#include <iostream>

using namespace std;

class calculator
{
    public: void add()
    {
        int a, b;
        cout << "Insert a and b" << endl;
        cin >> a >> b;
        cout << "Result: " << a + b << endl;
    }
    public: void subtract()
    {
        int a, b;
        cout << "Insert a and b" << endl;
        cin >> a >> b;
        cout << "Result: " << a - b << endl;
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



// 2. 헤더파일 사용하는 경우 - 클래스를 헤더로 분리해서 확정성 있게 사용

// calculator.h
class calculator
{
    public: void add();
    public: void subtract();
};


// calculator.cpp
#include <iostream>
#include "calculator.h"

using namespace::std;

void calculator::add()
{
    int a, b;
    cout << "Insert a and b" << endl;
    cin >> a >> b;
    cout << "Result: " << a + b << endl;
}

void calculator::subtract()
{
    int a, b;
    cout << "Insert a and b" << endl;
    cin >> a >> b;
    cout << "Result: " << a - b << endl;
}


// main.cpp
#include "calculator.h"

int main()
{
    calculator c;
    c.add();
    c.subtract();
    
    return 0;
}


