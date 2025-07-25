#include <iostream>
using namespace std;

int main()
{
  int n = 1;
  while (1)
  {
    switch (n)
    {
    case 1:
      cout << "this is int bracket" << endl;
      // exit(0);
      return 0;
      // continue; is not valid for switch case bcz it will execute infinite loop
    default:
      cout << "no case";
      break;
    }
  }
  return 0;
}