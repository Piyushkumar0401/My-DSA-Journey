#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter the row number : ";
  cin >> n;
  int i = 1;
  char ch;

  while (i <= n)
  {
    int j = 1;
    while (j <= i)
    {
      ch = 'A' + (i+ j - 2 );

      cout << ch << " ";
      j++;
      // ch++;
    }
    cout << endl;
    i++;
  }

  return 0;
}
