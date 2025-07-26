#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int PowOf2(int n)
{
  int m = 1;
  for (int i = 0; i <= 30; i++)
  {

    if (m < __INT_MAX__ / 2) // edge case
      m = pow(2, i);
    // m = pow(2, i);
    if (m == n)
    {
      return 1;
    }
  }

  return 0;
}

int main()
{
  int n;
  cout << "enter the number : ";
  cin >> n;
  cout << PowOf2(n);
  return 0;
}