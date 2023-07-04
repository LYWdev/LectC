/*
사용자로부터 5개의 정수를 입력받아, 그 합을 출력하는 프로그램
*/

#include <iostream>

int main(void)
{
  int num1;
  int num2;
  int num3;
  int num4;
  int num5;

  std::cout<<"1번쨰 정수 입력 :"<<std::endl;
  std::cin>>num1;

  std::cout<<"2번쨰 정수 입력 :"<<std::endl;
  std::cin>>num2;

  std::cout<<"3번쨰 정수 입력 :"<<std::endl;
  std::cin>>num3;

  std::cout<<"4번쨰 정수 입력 :"<<std::endl;
  std::cin>>num4;

  std::cout<<"5번쨰 정수 입력 :"<<std::endl;
  std::cin>>num5;

  int res = num1 + num2 +num3+num4+num5;
  std::cout<<res<<std::endl;


  return 0;
}