#include <iostream>
using namespace std;
// 1
// 2 3
// 3 4 5
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
    ch = 'A' + (i - j);

    while (j <= n)
    {
      cout<<ch<<" ";
      j++;
    }
    cout << endl;
    i++;
    ch++;
  }

  return 0;
}
