#include<iostream>
using namespace std;

class Human{
  public:
  int eye ;
  int hand ;
};
class Men : public Human{
  public:
  int legs;

};
class Women : public Men{
 
};

int main(){

  return 0;
}