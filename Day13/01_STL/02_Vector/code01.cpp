#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>a;
cout<<a.size()<<endl;
cout<<"capacity->"<<a.capacity()<<endl;
a.push_back(1);
cout<<a.size()<<endl;
cout<<"capacity->"<<a.capacity()<<endl;
a.push_back(2);
cout<<a.size()<<endl;
cout<<"capacity->"<<a.capacity()<<endl;
a.push_back(3);
cout<<a.size()<<endl;
cout<<"capacity->"<<a.capacity()<<endl;
cout<<"The element is at index 2 : "<<a.at(2)<<endl;
cout<<"the first element : "<<a.front()<<endl;
cout<<"the last element : "<<a.back()<<endl;
for(int i:a){
cout<<i<<" ";
}
cout<<endl;
a.pop_back();
for(int i:a){
cout<<i<<" ";
}
cout<<"before clear size : "<<a.size()<<" capacity : "<<a.capacity()<<endl;
a.clear();
cout<<"after clear size : "<<a.size()<<" capacity : "<<a.capacity()<<endl;
vector<int>b(4,1);
// all element initialise with 1
for(int i :b){
  cout<<i<<" ";
}
vector<int>last(a);// a ke saare last element aa jeange isme
  return 0;
}