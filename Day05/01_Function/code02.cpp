#include<iostream>
using namespace std;
bool isEven(int num){
if(num&1) return 0;
else return 1;
}

int main(){
int n;
cout<<"enter the number : ";
cin>>n;
cout<<isEven(n)<<endl;
  return 0;
}