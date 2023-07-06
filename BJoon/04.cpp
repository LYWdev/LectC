#include<stdio.h>
#include <iostream>
using namespace std;
//문제
//(A+B)%C는 ((A%C) + (B%C))%C 와 같을까?
//
//(A×B)%C는 ((A%C) × (B%C))%C 와 같을까?
//
//세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 A, B, C가 순서대로 주어진다. (2 ≤ A, B, C ≤ 10000)
//
//출력
//첫째 줄에 (A+B)%C, 
//둘째 줄에 ((A%C) + (B%C))%C, 
//셋째 줄에 (A×B)%C, 
//넷째 줄에 ((A%C) × (B%C))%C를 출력한다.
int main(void)
{
    int A;
    int B;
    int C;
    std::cin >> A,
    std::cin >> B,
    std::cin >> C,

    std::cout << (A+B)%C << std::endl;
    std::cout << ((A%C) + (B%C))%C << std::endl;
    std::cout << (A*B)%C << std::endl;
    std::cout << ((A%C) * (B%C))%C << std::endl;

    return 0;
}
//   std::string input;
