#include <iostream>
using namespace std;

int main()
{
  // char ch[6]="ABCDE";
  // cout<<"trying to print address of ch like int but : "<<ch<<endl;

  // char *gfg1 = &ch[0];
  // cout<<"it print entire string from 0 : "<<gfg1<<endl;

  // char *gfg2 = &ch[2];
  // cout<<"it print entire string from 2 : "<<gfg2<<endl;

  char temp = 'z';
  char *gfg3 = &temp;
  cout << " " << gfg3 << endl;

  return 0;
}