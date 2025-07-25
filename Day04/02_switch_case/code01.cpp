#include <iostream>
using namespace std;

int main()
{
  int n = 1;
  char ch = '1';
  switch (n)
  {
  case 1:
    switch (ch)
    {
    case '1':
      cout<<"This is char bracket"<<endl;
      break;
    }
    cout<<"this is int bracket"<<endl;
    break;

  default:
    cout << "no case";
    break;
  }
  return 0;
}