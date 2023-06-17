#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
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
