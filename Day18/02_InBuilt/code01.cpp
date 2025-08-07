#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
  string s1 = "hello i am piyush";
  string s2 = "hello i am piyush";
  // bool x = strcmp(s1.c_str(),s2.c_str());
  bool x = s1 == s2;  
  cout<<x;
  return 0;
}