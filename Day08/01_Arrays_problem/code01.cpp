#include<iostream>
using namespace std;

// input in the for of 2m+1 ;

int findUnique(int arr[],int size){
  int ans = 0;
  for (int i = 0; i < size; i++)
  {
    ans = ans ^ arr[i];
  }
  return ans;
}

int main(){
  int arr[] = {1,2,2,1,3};
  int size = sizeof(arr) / sizeof(arr[0]);
  cout<<"The unique number is "<<findUnique(arr,size);
  return 0;
}