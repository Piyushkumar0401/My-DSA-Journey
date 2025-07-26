#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the value of n : ";
  cin >> n;   
  if (n < 2)
  {
    cout << "Not prime";
    return 0;
  }
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      cout << "Not prime";
      return 0;
    }
  }

  cout << "prime";

  return 0;
}