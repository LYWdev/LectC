#include <iostream>

int main(void)
{
  int num1;
  int num2;
  int res=0;

  char arr[100]="Hello ARR";

  std::cout<<"두 개의 숫자 입력 :";
  std::cin>>num1>>num2;
  if(num1<num2)
  {
    for(int i = num1+1; i < num2; i++)
      res+=i;
  }
  else
  {
    for(int i = num2; i < num1; i++)
      res=+i;
  }
  std::cout<<"두 수의 합"<<res<<std::endl;
  std::cout<<arr<<std::endl;

return 0;
}

