#include <iostream>
using namespace std;
// 0 1 1 2 3 5 8 .....
int main()
{
  int n;
  cout << "Enter the value of n : ";
  cin >> n;
  int a = 0;
  cout << a << " ";

  int b = 1;
  cout << b << " ";

  for (int i = 2; i < n; i++)
  {
    int temp = a + b;
    cout << temp << " ";
    a = b;
    b = temp;
  }

  return 0;
}