/*
숫자를 하나 입력받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램
*/

#include <iostream>

int main(void)
{
  int num1;
  int i;
  std::cout<<"gugudan"<<std::endl;
  std::cin>>num1;

  for(i=0; i<21; i++)
  {
    printf("%d * %d = %d\n ",num1, i, num1*i);
  }

  return 0;
}