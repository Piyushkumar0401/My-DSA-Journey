#include<iostream>
using namespace std;
void printArray(int arr[],int n)
{
  cout << "printing the element of array : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
void update(int arr[],int size){
for (int i = 0; i < size; i++)
{
  arr[i]=arr[i]*2;
}
// Notes : Address jayega arrays ke case mai;
}
int main(){
int arr[4]={1,2,3,4};
int n = sizeof(arr) / sizeof(arr[0]);
update(arr,n);
printArray(arr,n);

  return 0;
}