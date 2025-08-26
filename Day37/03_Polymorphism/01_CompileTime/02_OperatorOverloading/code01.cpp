#include <iostream>
using namespace std;

class A
{
public:
  int a;
  int b;
  // Operator OverLoading
public:
  void operator+(A &obj)
  {
    // int value1 = this->a;
    // int value2 = obj.a;
    // cout << "Output : " << value2 - value1 << endl;
    cout<<"Hello [Piyush]";
  }
  void operator() (){
    cout<<"Hello"<<this->a<<endl;
  }
};

int main()
{
  A obj1;
  A obj2;
  obj1.a = 4;
  obj2.a = 8;
  obj1();

  return 0;
}