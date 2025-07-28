#include <iostream>
using namespace std;

/* int findDuplicate(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    int index = i + 1;
    for (int j = index; j < size; j++)
    {
      if ((arr[i] ^ arr[j]) == 0)
        return arr[i];
    }
  }
}
*/

int findDuplicate(int arr[], int size)
{
  int ans = 0;
  for (int i = 0; i < size; i++)
  {
    ans = ans ^ arr[i];
  }
  for (int j = 1; j < size; j++)
  {
    ans = ans ^ j;
  }
  return ans;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << "The unique number is " << findDuplicate(arr, size);
  return 0;
}