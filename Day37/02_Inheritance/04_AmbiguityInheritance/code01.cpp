#include <iostream>
using namespace std;


class A
{
  public:
  void fun()
  {
    cout << "inside function 1" << endl;
  }
};
class B
{
  public:
  void fun()
  {
    cout << "inside function 2" << endl;
  }
};
class C : public A , public B{

};

int main()
{
C c1;
c1.A::fun();
c1.B::fun();

  return 0;
}