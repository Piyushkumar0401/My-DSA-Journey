#include<iostream>
#include<limits.h>
using namespace std;

int main(){
int arr[6]={7,2,9,5,6,1};
int Min = __INT_MAX__;
int n =  sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
Min = min(arr[i],Min);  
}
cout<<Min;
  return 0;
}