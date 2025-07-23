#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter the number of rows : ";
  cin >> n;
  int i = 1;
  while (i <= n)
  {
    int k = 1;
    while (k <= n-i+1)
    {
      cout << k << " ";
      k++;
    }
    int j = 1;
    while (j <= (2*i-2))
    {
      cout << "  ";
      j++;
    }
    int l = k-1;
    while (l >= 1)
    {
      cout << l << " ";
      l--;
    }

    cout << endl;
    i++;
  }

  return 0;
}