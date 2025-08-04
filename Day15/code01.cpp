#include <iostream>
#include <vector>
using namespace std;

void mergeSortedArray(int arr1[], int arr3[], int arr2[], int n1, int n2)
{
  int i = 0;
  int j = 0;
  int k = 0;
  while (i < n1 && j < n2)
  {
    if (arr1[i] < arr2[j])
    {
      arr3[k++] = arr1[i++];
    }
    else
    {
      arr3[k++] = arr2[j++];
    }
  }
  while (i < n1)
  {
    arr3[k++] = arr1[i++];
  }
  while (j < n2)
  {
    arr3[k++] = arr2[j++];
  }
}
void print(int arr3[], int count)
{
  for (int i = 0; i < count; i++)
  {
    cout << arr3[i] << " ";
  }
}

int main()
{
  int arr1[] = {1, 3, 5, 7, 9};
  int arr2[] = {2, 4, 6};
  int arr3[8] = {0};
  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  int n3 = sizeof(arr3) / sizeof(arr3[0]);
  mergeSortedArray(arr1, arr3, arr2, n1, n2);
  print(arr3, 8);
  return 0;
}