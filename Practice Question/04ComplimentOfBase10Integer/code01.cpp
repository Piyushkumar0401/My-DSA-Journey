#include<iostream>
using namespace std;

int Cobint(int n){
  int bit ;
int ans = 0;//edge case
int multiply = 1;
while (n!=0)
{
bit = (n&1);
if(bit==1){
  bit = 0;
}
else {
  bit = 1;
}
ans = bit * multiply + ans;
multiply *=2;
n = n>>1;
}
return ans; 
}
int main(){
int n ;
cout<<"enter the number : ";
cin>>n;
cout<<Cobint(n);
  return 0;
}