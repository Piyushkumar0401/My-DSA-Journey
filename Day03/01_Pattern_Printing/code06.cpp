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
    int j = 1;
    while (j <= i-1)
    {
      cout << "  ";
      j++;
    }
    int k = i;
    while (k <= n)
    {
      cout <<k << " ";
      k++;
    }
    cout << endl;
    i++;
  }

  return 0;
}