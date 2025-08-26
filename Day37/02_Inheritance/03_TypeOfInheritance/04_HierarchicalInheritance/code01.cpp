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
class Women : public Human{
 public:
 int bt;
};


int main(){
Women w1 ;
cout<<w1.eye<<endl;
  return 0;
}