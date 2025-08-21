#include <iostream>
using namespace std;

void random(int src, int dest)
{
  cout << "Source :- " << src << "  Destination :- " << dest << endl;
  if(src==dest){
    return ;
  }
  src++;
  random(src,dest);
}

int main()
{
  int src,dest;
  cout<<"source : ";
  cin>>src;
  cout<<"destination : ";
  cin>>dest;
  random(src,dest);
  return 0;
}