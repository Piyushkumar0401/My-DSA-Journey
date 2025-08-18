#include <iostream>
using namespace std; 

int main()
{

  int i = 5;
  int &j = i; // create a reference variable

  j++;
  cout << i << endl;
  

  return 0;
}