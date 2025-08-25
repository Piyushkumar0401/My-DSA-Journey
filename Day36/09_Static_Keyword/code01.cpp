#include <iostream>
using namespace std;

class hero
{


public:
  static int TimeToComplete;
  static void print(int time){
    TimeToComplete = time ;
    cout<<TimeToComplete;
  }
};

int hero ::TimeToComplete = 0;


int main()
{
  cout<<hero::TimeToComplete;
  hero::print(5);
  return 0;
}