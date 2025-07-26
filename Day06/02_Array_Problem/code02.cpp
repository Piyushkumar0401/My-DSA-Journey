#include<iostream>
using namespace std;
int sumOfArrayElement(int arr[],int n){
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum =sum + arr[i];
  }
  return sum;
}

int main(){
int arr[100];
int n;
cout<<"enter the size of an Array : ";
cin>>n;
for (int i = 0; i < n; i++)
{
  cin>>arr[i];
}
cout<<"the sum of element of Array is "<<sumOfArrayElement(arr,n);

  return 0;
}