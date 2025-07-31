#include <iostream>
using namespace std;

void firstAndLast(int arr[], int key, int n)
{
  int start = 0;
  int end = n - 1;
  int first, last;
  int mid = start + (end - start) / 2;
  while (start <= end)
  {

    if (arr[mid] == key)
    {
      first = mid;
      end = mid - 1;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  cout << first<<" ";
  start = 0;
  end = n - 1;
  mid = start + (end - start) / 2;
  while (start <= end)
  {
    if (arr[mid] == key)
    {
      last = mid;
      start = mid + 1;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  cout << last<<endl;
}

int main()
{
  int even[] = {1, 2, 2, 2, 2, 2, 2, 8}; // output must be 1 - 6
  int odd[] = {1, 2, 2, 2, 2, 2, 2};     // output must be 1 - 6
  int key;
  cout << "Enter the number : ";
  cin >> key;
  int n1 = sizeof(even) / sizeof(even[0]);
  int n2 = sizeof(odd) / sizeof(odd[0]);
  firstAndLast(even, key, n1);
  firstAndLast(odd, key, n2);
  return 0;
}