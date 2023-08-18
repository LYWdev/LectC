#include<stdio.h>
#include<iostream>
/*
(
별 찍기 - 2
)

*/

int main(void)
{
    int num;

    std::cin >> num;

    for (size_t i = 0; i < num; i++)
    {
        for (size_t k = (num-i-1); k > 0; k--)
        {
            printf(" ") ;
        }

        for (size_t j = 0; j <= i; j++)
        {
            printf("*") ;
        }
        printf("\n");
    }
return 0;
}