#include <iostream>
using namespace std;

void printArray(int arr[],int n)
{
  // int size = sizeof(arr)/sizeof(arr[0]);
  // cout<<size<<endl;   ----->   not possible
  cout << "printing the element of array : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int arr[4] = {1,2};
  int n = sizeof(arr) / sizeof(arr[0]);
 
  printArray(arr,n);
  
  return 0;
}