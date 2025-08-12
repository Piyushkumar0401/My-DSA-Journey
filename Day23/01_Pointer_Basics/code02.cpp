#include<iostream>
using namespace std;

int main(){
int n = 5;
int *ptr = 0;
ptr = &n;

// is same as
// int *ptr = &n;

int nums = 5;
int *z = &nums;
cout<<"before : "<<nums<<endl;
*z = (*z) *10;
cout<<"after : "<<nums<<endl;

// copying pointer in other pointer  
int *p = z;
cout<<"Before : "<<z<<" - "<<p<<endl;
cout<<"after : "<<(*z)<<" - "<<(*p)<<endl;
*p = (*p) *10;
cout<<"after copying : "<<nums<<endl;

++*p;//error nahi but acha code mtlb bracket lgana hai h !
cout<<"hit and trails  : "<<nums<<endl;
cout<<"hit and trails *p  : "<<(*p)<<endl;
p = p + 1;
cout<<"adress of p : "<<p<<endl;
cout<<"value of p : "<<(*p)<<endl;
cout<<"hit and trails  : "<<nums<<endl;

  return 0;
}