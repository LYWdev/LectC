/*
판매원 급여 계산 프로그램, 
매월 50만원 + 물픔판매액의 12%를 지급함.
*/

#include <iostream>
#include <string>

int main(void)
{

  int base;
  std::string cti;
  while (1 )
  {
  std::cout<<"판매 금액을 만원 단위로 입력"<<std::endl;
  std::cin>>cti;
  base=stoi(cti);
  printf("%.0f 만원\n",50 + (base*0.12));
    /* code */
  }

  if(base == -1) {
    printf("프로그램 종료");
    return 0;
  }
}