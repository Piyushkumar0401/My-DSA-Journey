#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter the row number : ";
cin>>n;
int i = 1;
while (i<=n)
{
int j = 1;

  while(j<=i){
  cout<<"* ";
  j++;
  } 
  cout<<endl;
  i++;
}

  return 0;
}