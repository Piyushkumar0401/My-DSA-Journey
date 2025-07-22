#include<iostream>
using namespace std;

int main(){
  int n;
  cout << "enter the value of n : ";
  cin >> n;
  int sum = 2;
  for (int i = 1; i <= n; i+=2)
  {
    sum = sum + i;
  }
  cout << "the sum of Even Number from 1 to " << n << " is " << sum;
  return 0;
}