# lectC

## ch01-1 시간 복잡도

```c

using namespace std;
 
int main()
{
  int count;
  int findNumber;
  srand(time(NULL));
  findNumber = rand()%100;
 
  for ( int i = 0; i<100; i++){
    if(i == findNumber){
      count << i;
      break;
    }
  }
 
}
```
1 ~ 100사이의 무작위 값을 찾아 출력하는 코드이다.
BigO(N)의 시간복잡도를 갖는다. (최악을 계산하여야한다.)

