#include<iostream>
using namespace std;

class hero{

  // Properties
  public:
  int health;
  // private:
  char level;

  // void print(){
  //   cout<<level;//no error private hone ke baad bhi kiuki ye class mai h !
  // }
   
};

int main(){
  hero h1;
  h1.health = 70;
  h1.level = 'A';
  cout<<"Size : "<<sizeof(h1)<<endl;
  cout<<"Health is : " <<h1.health<<endl; 
  cout<<"Level is : " <<h1.level<<endl; 
  return 0;
}