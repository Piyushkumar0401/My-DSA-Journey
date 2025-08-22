#include<iostream>
using namespace std;

void sorting(int arr[],int size){
if(size==0 || size == 1){
  return ;
}
for (int i = 1; i < size; i++)
{
 if(arr[i]<arr[i-1]){
  swap(arr[i],arr[i-1]);
 } 
}
sorting(arr,size-1);

}

int main(){
int arr[]={4,5,3,7,1,8};
int size = sizeof(arr)/sizeof(arr[0]);
sorting(arr,size);
for (int i = 0; i < size; i++)
{
  cout<<arr[i]<<" ";
}

  return 0;
}