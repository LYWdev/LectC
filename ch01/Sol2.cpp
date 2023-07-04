/*
이름과 전화번호를 입력받아 출력하는 프로그램
*/

#include <iostream>

int main(void)
{
  char num1[100];
  char num2[100];

  std::cout<<"이름"<<std::endl;
  std::cin>>num1;
  std::cout<<num1<<std::endl;

  std::cout<<"전화번호"<<std::endl;
  std::cin>>num2;
  std::cout<<num2<<std::endl;

  return 0;
}