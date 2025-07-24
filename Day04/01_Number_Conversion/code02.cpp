#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter the number : ";
  cin >> n;
  int digit;
  int ans = 0;
  int multiply = 1; 

  while (n != 0)
  {
    digit = (n % 10);
    if(digit==1)  ans = multiply + ans;
    n /=10;
    multiply*=2;
  }
  cout << ans;

  return 0;
}