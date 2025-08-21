#include <iostream>
using namespace std;
bool linearSearch(int arr[], int size, int target)
{
  if (size == 0)
  {
    return false;
  }

  if (target == arr[0])
    return true;
  else
  {
    bool ans = linearSearch(arr + 1, size - 1, target);
    return ans;
  }
}

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int size = 5;
  int target = 7;
  cout << linearSearch(arr, size, target);
  return 0;
}