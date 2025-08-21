#include <iostream>
#include <string.h>
using namespace std;

void sayDigit(int nums)
{
  // tail recurssion;
  string arr[10] = {"zero ", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine"};
  if (nums == 0)
    return;
  int digit = nums % 10;
  nums = nums / 10;
  sayDigit(nums);
  cout << arr[digit];
}

int main()
{
  int nums;
  cout << "enter number : ";
  cin >> nums;
  sayDigit(nums);
  return 0;
}