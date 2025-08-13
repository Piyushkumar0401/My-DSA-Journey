#include<iostream>
using namespace std;

int main(){
int arr [20]={0};
cout<<"address of first memory location : "<<arr<<endl;
cout<<"address of first memory location : "<<&arr<<endl;
cout<<"address of first memory location : "<<&arr[0]<<endl;
cout<<endl;
int *ptr = arr;
cout<<"address of 0th index element  : "<<ptr<<endl;
cout<<"size of address to store pointer address : "<<&ptr<<endl;
cout<<"value at 0th index : "<<*ptr<<endl;
cout<<endl;

int brr[5]={1,2,3,4,5};
// brr = brr + 1 ;   error
// cout<<brr<<endl;  error
int *btr = brr ;
cout<<"Before : "<<btr<<endl; 
cout<<"Before : "<<*btr<<endl;
btr = btr + 1;
cout<<"After : "<<btr<<endl; 
cout<<"After : "<<*btr<<endl;
  return 0;
}