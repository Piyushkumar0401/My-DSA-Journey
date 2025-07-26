#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
  int arr[6] = {7, 2, 9, 5, 6, 1};
  int Mini = __INT_MAX__;
  int Maxi = __WINT_MIN__;
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++)
  {
    Maxi = max(arr[i] , Maxi);

  }
  for (int i = 0; i < n; i++)
  {
    Mini = min(arr[i] , Mini);
  }
  cout << "The Maximum Value Of an Array : " << Maxi << endl;
  cout << "The Minimum Value Of an Array : " << Mini;
  return 0;
}