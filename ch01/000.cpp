#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
/*
*/
int main()
{
  int N = 0;
  string number;
  cin >> N;
  cin >> number;
  int sum = 0;;

  for (int i=0; i < number.length(); i++)
  {
    sum += number[i] - '0';
  }
   cout << sum << "\n";
}
