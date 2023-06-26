
//C++에서는 프로그래머가 정의하는 헤더파일의 선언이 아닌, 표준 헤더파일의 선언에서는 확장자를 생략하기로 되어있음.

#include <iostream>

int main(void)
{
  int num = 20;
  std::cout<<"Hello World"<<std::endl;
  std::cout<<"Hello"<<"World!"<<std::endl;
  std::cout<<num<<"빈칸 "<<'A'<<std::endl;
  std::cout<<num<<' '<<3.14<<std::endl;

}
