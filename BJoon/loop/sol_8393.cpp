#include<stdio.h>
#include<iostream>
/*
(
문제
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.

출력
1부터 n까지 합을 출력한다.
)

*/

int main(void)
{
    int n;
    int sum=0;
    scanf("%d", &n);

    for ( int i = n; i > 0; i--)
    {
        //sum +=i;
        sum = i+sum;
    }
    //n(n+1)/2
    printf("%d",sum);
}