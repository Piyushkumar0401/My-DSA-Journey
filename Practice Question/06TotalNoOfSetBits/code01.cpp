#include<iostream>
using namespace std;
int setbit(int n){
int i=0;
while(n!=0){
  if(n&1) i++;
  n=n>>1;
}
return i;
}
int main(){
int a,b;
cin>>a>>b;
int ans = setbit(a)+setbit(b);
cout<<ans;
  return 0;
}