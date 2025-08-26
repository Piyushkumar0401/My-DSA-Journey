#include <iostream>
using namespace std;

class A
{
  //Function OverLoading
  public:
  void fun(){
    cout<<"Function without parameter "<<endl;
  }
  void fun(int a) {
    cout<<"Function with parameter 1 "<<endl;
  }
  void fun(int a, int b) {
    cout<<"Function with parameter 2 "<<endl;
  }
  int fun(int a, int b, int c) {
    cout<<"Function with parameter 3 "<<endl;
  }
};

int main()
{
A a1;
a1.fun();
a1.fun(1);
a1.fun(1,2);
a1.fun(1,2,3);
  return 0;
}