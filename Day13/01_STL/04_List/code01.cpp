#include<iostream>
#include<list>
using namespace std;

int main(){
list<int>a;
a.push_back(1);
a.push_front(2);
cout<<a.size()<<endl;
for(int i:a){
  cout<<i<<" ";
}
a.erase(a.begin());
cout<<endl;
for(int i:a){
  cout<<i<<" ";
}
// list copy
list<int>b(a);
  return 0;
}