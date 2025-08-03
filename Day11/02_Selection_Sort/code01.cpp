#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
  // round  size -1
  for (int i = 0; i < size-1; i++)  
  {
    int index = i; 
    for (int j = i + 1; j < size; j++)
    {
      if (arr[index] > arr[j])
      {
        index = j;
      }
    }
    swap(arr[index],arr[i]);
  }
}
void print(int arr[],int size){
for (int i = 0; i < size; i++)
{
  cout<<arr[i]<<" ";
}

}

int main()
{
  int arr[] = {64, 25, 25, 22, 11};
  int size = sizeof(arr) / sizeof(arr[0]);
  selectionSort(arr,size);
  print(arr,size);
  return 0;
}