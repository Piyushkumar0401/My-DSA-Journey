#include <iostream>
using namespace std;
void update(int *p)
{
  // p = p + 1;
  // cout<<"Inside function : "<<p<<endl;
  *p = *p + 1;
}

int main()
{
  int value = 5;
  int *p = &value;
  cout << "Before : " << p << endl;
  cout << "Before : " << *p << endl;
  cout<<endl;
  update(p);
  cout << "after : " <<  p << endl;
  cout << "after : " << *p << endl;
  return 0;
}