#include<iostream>
using namespace std;
// 1
// 2 3
// 3 4 5
int main(){
int n;
cout<<"enter the row number : ";
cin>>n;
int i = 1;
while (i<=n)
{
int j = 1;
// 2+1 = 3
// 3+0=3
  int count = i;
  while(j<=i){
  cout<<count<<" ";
  count++;
  j++;
  } 
  cout<<endl;
  i++;
}

  return 0;
}
