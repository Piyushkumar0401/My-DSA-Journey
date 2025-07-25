#include <iostream>
using namespace std;
int fact(int num)
{
  int ans = 1;
  if (num == 0 || num == 1)
  {
    return 1;
  }
  for (int i = 2; i <= num; i++)
  {
    ans = ans * i;
  }
  return ans;
}

int nCr(int n,int r){
return (fact(n))/(fact(r)*fact(n-r));
}
    
int main()
{
  int n;
  cout << "enter the number : ";
  cin >> n;
  int r;
  cout << "enter the number : ";
  cin >> r;
  cout<<"The answer is : "<<nCr(n,r);
  return 0;
}