#include<iostream>
using namespace std;

class hero{
  public:
  hero(){
    // constructor
    cout<<"Constructor call"<<endl;
  }
};

int main(){
  cout<<"hello"<<endl;
  hero h1;
  cout<<"hii"<<endl;
  hero * h2 = new hero;

  return 0;
}