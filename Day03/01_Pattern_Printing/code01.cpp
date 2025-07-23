#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter the number of row : ";
  cin >> n;
  int i = 1;
  char ch;
  while (i <= n)
  {
    int j = 1;
    while (j <= i)
    {
      ch = 'A' + (n-i+j-1) ;  
      cout<<ch<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}