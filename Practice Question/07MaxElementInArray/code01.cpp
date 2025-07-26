#include<iostream>
#include<limits.h>
using namespace std;

int main(){
int arr[6]={1,2,9,5,6,2};
int Max = __WINT_MIN__;
int n =  sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
Max = max(arr[i],Max);
}
cout<<Max;
  return 0;
}