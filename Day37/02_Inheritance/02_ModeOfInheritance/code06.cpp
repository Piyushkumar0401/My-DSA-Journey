#include <iostream>
using namespace std;
class human
{
  // class - > protected or inherit krne ke liye private modifier ka use 
protected:
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

class male : private human
{
public:
  string color;
  void berojgaar()
  {
    cout << "Berojgaar" << endl;
  }
  int getHeight(){
    cout<<height<<endl;
  }
};

int main()
{
  male m1;
  m1.getHeight();
  // cout<<m1.height;// private
  return 0;
}