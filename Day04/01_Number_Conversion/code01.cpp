#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter the number : ";
  cin >> n;
  int bit;
  int ans = 0;
  int multiply = 1; 

  while (n != 0)
  {
    bit = (n & 1);

    ans = bit * multiply + ans;
    n = n >> 1;
    multiply*=10;
  }
  cout << ans;

  return 0;
}