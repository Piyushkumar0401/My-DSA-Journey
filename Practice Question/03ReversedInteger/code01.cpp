#include <iostream>
#include <limits.h>

using namespace std;


int RevNum(int n){
  int ans = 0;
  int rem;

  while (n != 0)
  {
    rem = n % 10;
    if (ans > (__INT_MAX__) / 10 || ans < (__WINT_MIN__) / 10)
    {
      return 0;
    }
    ans = (ans * 10) + rem;
    n = n / 10;
  }
  // 2147483647
  return ans;
}

int main()
{
  int n;
  cout << "enter the number : ";
  cin >> n;
  cout<<RevNum(n);
}