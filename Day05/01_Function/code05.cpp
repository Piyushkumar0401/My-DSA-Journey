#include <iostream>
using namespace std;
bool isPrime(int n)
{
  if (n < 2)
    return 0;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
      return 0;
  }
  return 1;
}
int main()
{
  int n;
  cout << "enter the number : ";
  cin >> n;
  cout<<isPrime(n);
  return 0;
}