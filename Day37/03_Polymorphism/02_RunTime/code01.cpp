#include<iostream>
using namespace std;
// Method Overridding

class Animal{
  public:
  void speak(){
    cout<<"Speak"<<endl;
  }
};
class Dog : public Animal{
  public:
  int speak(){//datatype same and different rkh skte h koi problem nhi hai !
    cout<<"Bark"<<endl;
    return 1;
  }
};

int main(){
Dog d1;
d1.speak();
  return 0;
}