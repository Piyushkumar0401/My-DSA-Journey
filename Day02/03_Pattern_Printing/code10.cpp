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

  while (i <= n)
  {
    int j = 1;
    while (j <= i)
    {
      cout<<(i-j+1)<<" ";
      j++;
    }
    cout << endl;
    i++;
  }

  return 0;
}
