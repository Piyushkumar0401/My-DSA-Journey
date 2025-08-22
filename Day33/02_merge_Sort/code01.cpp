#include <iostream>
using namespace std;

void merge(int arr[], int start, int end)
{
  int mid = start + (end - start) / 2;
  int len1 = mid - start + 1;
  int len2 = end - mid;
  int *arr1 = new int[len1];
  int *arr2 = new int[len2];

  // copy value   k->mainarrayindex
  int k = start;
  for (int i = 0; i < len1; i++)
  {
    arr1[i] = arr[k++];
  }

  k = mid + 1;
  for (int i = 0; i < len2; i++)
  {
    arr2[i] = arr[k++];
  }

  // merge
  int index1 = 0;
  int index2 = 0;
  k = start;

  while (index1 < len1 && index2 < len2)
  {
    if (arr1[index1] < arr2[index2])
    {
      arr[k++] = arr1[index1++];
    }
    else
    {
      arr[k++] = arr2[index2++];
    }
  }

  while (index1 < len1)
  {
    arr[k++] = arr1[index1++];
  }
  while (index2 < len2)
  {
    arr[k++] = arr2[index2++];
  }
  delete[] arr1;
  delete[] arr2;
}

void mergeSort(int arr[], int start, int end)
{
  // base case
  if (start >= end)
    return;
  // mid
  int mid = start + (end - start) / 2;
  // left part
  mergeSort(arr, start, mid);
  mergeSort(arr, mid + 1, end);
  merge(arr, start, end);
}

int main()
{
  int arr[5] = {2, 5, 1, 6, 9};
  int n = 5;
  mergeSort(arr, 0, n - 1);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}