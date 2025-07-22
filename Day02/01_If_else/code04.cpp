#include<iostream>
using namespace std;

int main(){
char ch;
cout<<"enter the character for ch : ";
cin>>ch;
if (ch>='A'&&ch<='Z')
  cout<<"UserInput is Uppercase char";
else if (ch>='a'&&ch<='z')
  cout<<"UserInput is Lowecase char";
else if(ch>='0'&&ch<='9')
  cout<<"UserInput is Numerical char";
else{
  cout<<"Input invalid";
}  
  return 0;
}