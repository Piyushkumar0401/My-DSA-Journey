// calculator
#include <iostream>
using namespace std;

int main()
{
  int a ;
  cout<<"Enter the value of a : ";
  cin>>a;
  int b ;
  cout<<"Enter the value of b : ";
  cin>>b;
  char ch;
  cout<<"Enter the operation you want to perform : ";
  cin>>ch;
  switch (ch)
  {
  case '+':
    cout << (a + b);
    break;
  case '-':
    cout << (a - b);
    break;
  case '*':
    cout << (a * b);
    break;
  case '/':
    cout << (a / b);
    break;
  case '%':
    cout << (a % b);
    break;

  default: cout<<"Please enter the valid operator"; 
    break;
  }
  return 0;
}