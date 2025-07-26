#include <iostream>
using namespace std;


void arrRevese(int arr[],int size){
  int i = 0;
  int j = size - 1;
  while (j >= i)
  {
    swap(arr[i], arr[j]);
    i++;
    j--;
  }
}

void arrPrint(int arr[],int size){
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
}

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  arrRevese(arr,size);
  arrPrint(arr,size);
  
  
  return 0;
}