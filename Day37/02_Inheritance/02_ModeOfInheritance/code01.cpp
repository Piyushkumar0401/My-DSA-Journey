#include <iostream>
using namespace std;
class human
{
// class - > public or inherit krne ke liye public modifier ka use 
public:
  int height = 5;
  int weight = 70;
  int age = 5;

public:
  int getAge()
  {
    return this->age;
  }
  void setAge(int a)
  {
    (*this).age = a;
  }
};

class male : public human
{
public:
  string color;
  void berojgaar()
  {
    cout << "Berojgaar" << endl;
  }
};

int main()
{
  male m1;
  cout << m1.age << endl;
  cout << m1.height << endl;
  cout << m1.weight << endl;
  m1.berojgaar();
  m1.age = 21;
  cout << m1.age << endl;
  return 0;
}