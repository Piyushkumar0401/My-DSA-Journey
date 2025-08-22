#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
  int pivot = arr[start];
  int count = 0;
  for (int i = start + 1; i <= end; i++)
  {
    if (arr[i] <= pivot)
    {
      count++;
    }
  }
  // place pivot at right position
  int pivotIndex = start + count;
  swap(arr[pivotIndex], arr[start]);

  // right or left part ko theek krna h

  int i = start;
  int j = end;
  while (i < pivotIndex && j > pivotIndex)
  {
    while (arr[i] <= pivot)
    {
      i++;
    }
    while (arr[j] > pivot)
    {
      j--;
    }
    if (i < pivotIndex && j > pivotIndex)
    {
      swap(arr[i++], arr[j--]);
    }
  }
  return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
  // base
  if (start >= end)
  {
    return;
  }

  // partition
  int p = partition(arr, start, end);

  // leftpart sort
  quickSort(arr, start, p - 1);
  quickSort(arr, p + 1, end);
}

int main()
{
  int arr[5] = {4 ,2, 5 ,1 ,3};
  int size = sizeof(arr) / sizeof(arr[0]);
  quickSort(arr, 0, size - 1); 

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}