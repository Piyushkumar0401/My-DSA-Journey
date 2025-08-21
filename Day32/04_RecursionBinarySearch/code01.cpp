#include <iostream>
using namespace std;
bool BinarySearch(int arr[], int target, int start, int end)
{
  // element not found
  if(start>end) return false;
  int mid = start + (end - start) / 2;
  // element found
  if (arr[mid] == target)
  {
    return true;
  }
  else if (arr[mid] > target)
  {
    return BinarySearch(arr, target, start, mid-1);
    
  }
  else 
  {
    return BinarySearch(arr,  target, mid + 1 , end);
  }
}

int main()
{
  int arr[7] = {1, 2, 3, 4, 5, 6, 7};
  int target = 11;
  int start = 0;
  int end = 7 - 1;
  cout << BinarySearch(arr,target, start, end);

  return 0;
}