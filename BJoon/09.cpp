#include<stdio.h>
#include<iostream>
/*
(
예전에는 운영체제에서 크로아티아 알파벳을 입력할 수가 없었다. 따라서, 다음과 같이 크로아티아 알파벳을 변경해서 입력했다.

크로아티아 알파벳	변경
č	c=
ć	c-
dž	dz=
đ	d-
lj	lj
nj	nj
š	s=
ž	z=
예를 들어, ljes=njak은 크로아티아 알파벳 6개(lj, e, š, nj, a, k)로 이루어져 있다. 단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.

dž는 무조건 하나의 알파벳으로 쓰이고, d와 ž가 분리된 것으로 보지 않는다. lj와 nj도 마찬가지이다. 위 목록에 없는 알파벳은 한 글자씩 센다.
)
*/

int main(void)
{
    int num1;
    int num2;
    int num3;
    int max=0;

    std::cin >> num1>>num2>>num3;

    if(num1==num2 && num2==num3){
        std::cout<<10000+(num1*1000)<<std::endl;
    }

    else if(num1==num2){
        std::cout<<1000+(num1*100)<<std::endl;
    }

    else if(num2==num3){
        std::cout<<1000+(num2*100)<<std::endl;
    }

    else if(num3==num1){
        std::cout<<1000+(num3*100)<<std::endl;
    }
    else{
        max = num1;
        if(max < num2){max = num2;}
        if (max < num3){max = num3;}
        std::cout<<max*100<<std::endl;
    }
    return 0;
}
