#include<iostream>
using namespace std;

void reverse(string &str1 ,int start , int end){
  if(start>end){
     return ;
  }
  swap(str1[start],str1[end]);
  reverse(str1,start+1,end-1);
}


int main(){
string str = "abcde";
int start = 0;
int end = 4;
reverse(str,start,end);
cout<<str; 
  return 0;
}