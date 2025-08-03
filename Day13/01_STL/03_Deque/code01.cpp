#include<iostream>
#include<deque>
using namespace std;

int main(){
deque<int>a;
a.push_back(2);
a.push_front(1);
a.push_back(3);
for(int i:a){
  cout<<i<<" ";
}
cout<<endl;
cout<<"element at index 1 : "<<a.at(1);
cout<<"first element : "<<a.front()<<endl;
cout<<"Last element : "<<a.back()<<endl;
cout<<"is empty or not : "<<a.empty()<<endl;
cout<<"size before erase : "<<a.size()<<endl;
a.erase(a.begin(),a.begin()+1);
cout<<"size after erase : "<<a.size()<<endl;
cout<<"Max size : "<<a.max_size()<<endl;
// a.pop_front();
// for(int i:a){
//   cout<<i<<" ";
// }
// cout<<endl;
// a.pop_back();
// for(int i:a){
//   cout<<i<<" ";
// }
  return 0;
}