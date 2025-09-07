#include<iostream>
#include<queue>
using namespace std;

int main(){
deque<int>q;
q.push_front(4);
cout<<"front : "<<q.front()<<endl;
cout<<"size : "<<q.size()<<endl;
q.push_back(5);
cout<<"Back : "<<q.back()<<endl;
cout<<"size : "<<q.size()<<endl;

q.pop_front();
cout<<"size : "<<q.size()<<endl;
q.pop_back();
cout<<"size : "<<q.size()<<endl;

  return 0;
}