#include <iostream>
#include <queue>
using namespace std;

int main()
{
  queue<int> q;
  q.push(5);
  cout << "Size of Queue : " << q.size() << endl;
  q.push(7);
  cout<<"Queue Back : "<<q.back()<<endl;
  cout << "Size of Queue : " << q.size() << endl;
  q.push(9);
  cout << "Size of Queue : " << q.size() << endl;
  q.push(11);
  cout << "Size of Queue : " << q.size() << endl;
  cout << "Front of Queue : " << q.front() << endl;
  q.pop();
  cout << "Front of Queue : " << q.front() << endl;
  cout << "Size of Queue : " << q.size() << endl;
  q.pop();
  cout << "Front of Queue : " << q.front() << endl;
  cout << "Size of Queue : " << q.size() << endl;
  q.pop();
  cout << "Front of Queue : " << q.front() << endl;
  cout << "Size of Queue : " << q.size() << endl;
  cout << "Is empty ? " << q.empty() << endl;
  q.pop();
  cout << "Size of Queue : " << q.size() << endl;
  cout << "Is empty ? " << q.empty();
  return 0;
}