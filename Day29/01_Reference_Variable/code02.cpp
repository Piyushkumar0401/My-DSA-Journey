#include <iostream>
using namespace std;

// int &return1(int n)
// {
//   int nums = n;      //Bad Practice  
//   int &ans = nums;
//   return ans;
// }

void update(int &n)
{
  n++;
}

int main()
{

  int i = 5;
  cout << "Before : " << i << endl;
  update(i);
  cout << "after : " << i << endl;
  // cout << return1(i) << endl;

  return 0;
}