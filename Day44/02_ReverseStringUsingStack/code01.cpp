#include<iostream>
#include<stack>
using namespace std;
int main(){

  string str = "babbar";
  stack<int>s;
  int top = -1;
  int len = str.length();
  for (int i = 0; i < len; i++)
  {
    top++;
    s.push(str[i]);
  }
  string ans = "";
  while(!s.empty())
  {
    char remo = s.top();
    ans = ans + remo;
    s.pop();
  }
  cout<<ans;
    
  return 0;
}