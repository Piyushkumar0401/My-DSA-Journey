#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int PowerOf2(int n){
  int i = 0;
while (n!=0)
{
  if(n&1) i++;
  n=n>>1;
}
if(i==1) return 1;
else return 0;
}

int main()
{
  int n;
  cout << "enter the number : ";
  cin >> n;
  cout << PowerOf2(n);
  return 0;
}