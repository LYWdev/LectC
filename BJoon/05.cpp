#include<stdio.h>
#include <iostream>
using namespace std;

// 3자리수 *3자리하면 

//1번째 줄 3자리 * 1자리 출력하라
//2번째 줄 3자리 * 2자리 출력하라
//3번째 줄 3자리 * 3자리 출력하라
//4번째 줄 결과 출력하라

int main(void)
{
    int input_num1;
    int input_num2;

    std::cin >> input_num1;
    std::cin >> input_num2;
    
    int layer_1 = input_num1*(input_num2%10);
    int layer_2 = input_num1*(input_num2%100-input_num2%10);
    int layer_3 = input_num1*(input_num2%1000-input_num2%100-input_num2%10);
    int layer_4 = input_num1*input_num2;

    std::cout << layer_1<< std::endl;
    std::cout << layer_2<< std::endl;
    std::cout << layer_3<< std::endl;
    std::cout << layer_4<< std::endl;

}
//   std::string input;
//472
//385