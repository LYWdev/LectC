#include<stdio.h>
#include <iostream>
using namespace std;

//첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다.

int main(int argc, char* argv[])
{
  double div;
  int sum,muti,min,a,b,mod;

  std::cin>>a>>b;
  sum   = a+b;
  min   = a-b;
  muti  = a*b;
  div   = a/b;
  mod   = a%b;

  std::cout<<sum<<std::endl;
  std::cout<<min<<std::endl;
  std::cout<<muti<<std::endl;

  std::cout<<div<<std::endl;

  std::cout<<mod<<std::endl;


}