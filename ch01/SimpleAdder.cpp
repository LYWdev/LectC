
//C++에서는 프로그래머가 정의하는 헤더파일의 선언이 아닌, 표준 헤더파일의 선언에서는 확장자를 생략하기로 되어있음.

#include <iostream>

int main(void)
{
  int num1;
  std::cout<< "Type first NUM1";
  std::cin>>num1;

  int num2;
  std::cout<< "Type first NUM2";
  std::cin>>num2;

  int res = num1 + num2;
  std::cout<< "Result ADD :"<<res<<std::endl;

  int res1 = num1 / num2;
  std::cout<< "Result DIV :"<<res1<<std::endl;

  return 0;
}