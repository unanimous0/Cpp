#include <iostream>
#define PRICE_PER_ITEM 30     # 매크로로 상수를 대체하는 방식은 cpp에서 거의 쓰이지 않음 
                              # 이유 1. 디버깅이 어려움 (밑에서 맨 위에까지 왔다갔다 해야함)
                              # 이유 2. #define은 이 cpp 파일 전체에 영향을 미침 (영향을 미치는 범위가 너무 넓음)
                              ## 따라서 const int price_per_item = 30 과 같은 식으로 쓰는게 바람직

int main()
{
  # 컴파일 타임 상수 (이런 명칭이 있는 것은 아니나 이런 개념) -> 컴파일 할 때 정해지는 상수
  const int my_const(123);
  
  int number;
  cin >> number;
  
  # 런타임 상수 (이런 명칭이 있는 것은 아니나 이런 개념) -> 런타임에서 정해지는 상수
  const int special_number(number);
  
  # cpp 11에서 새로 생긴 "constexpr" : 컴파일할 때 정해진다는 것을 명시적으로 보여줌
  constexpr int comp_number(123);
  
  return 0;
}


/*
  # const 상수는 하나의 헤더파일에 모아서 사용하는 경향이 있음
  
  MY_CONSTANTS.h
  
    #pragma once
    namespace constants
    {
      const double pi(3.141592);
      constexpr double avogadro(6.0221413e23);
      constexpr double moon_gravity(9.8 / 6.0);
      // ...
    }
    
    # 이렇게 만들고 사용하려는 cpp 파일에 #include "MY_CONSTANTS.h"을 작성하고 정의한 namespace로 불러오면됨
    ex) 
    double radius = 2.5;
    double circumference = 2.0 * radius * constants::pi;
*/
