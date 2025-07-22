#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter the value of n : ";
  cin >> n;
  if (n < 2)
  {
    cout << "Not prime";
    return 0;
  }
  int i = 2;
  while (i < n)
  {
    if (n % i == 0)
    {
      cout << "not prime";
      return 0;
    }
    i++;
  }
  cout<<"prime";

  return 0;
}