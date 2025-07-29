#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int n)
{
  int i = 0;
  int j = n - 1;
  int k = 0;
  while (k < (n / 2 + 1))
  {
    int mid = i + ((j-i) / 2);
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] > key)
    {
      j = mid - 1;
    }
    else
    {
      i = mid + 1;
    }
    k++;
  }
  return -1;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int key;
  cout << "Enter the number : ";
  cin >> key;
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << binarySearch(arr, key, n);

  return 0;
}