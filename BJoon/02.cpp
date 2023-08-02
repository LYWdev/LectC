
#include<stdio.h>
#include<iostream>
/*
시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.


*/

int main(void)
{
    int A;

    std::cin >> A;

    if(90<=A && A<=100)         {std::cout << "A"<< std::endl;}
    else if(80<=A && A<=89)     {std::cout << "B"<< std::endl;}
    else if(70<=A && A<=79)     {std::cout << "C"<< std::endl;}
    else if(60<=A && A<=69)     {std::cout << "D"<< std::endl;}
    else                       {std::cout << "F"<< std::endl;}

    return 0;
    
}
