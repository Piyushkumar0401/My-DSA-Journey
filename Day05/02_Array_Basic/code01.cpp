#include<iostream>
using namespace std;

int main(){
  // declare
 int arr[3];
//  initialise
arr[0]=1;
arr[1]=2;
arr[2]=3;
// access
cout<<arr[2]<<endl;

// other way

int array[3]={1,2,3};
cout<<array[2];

int a[100000]={0};//set 0 at all index
 
  return 0;
}