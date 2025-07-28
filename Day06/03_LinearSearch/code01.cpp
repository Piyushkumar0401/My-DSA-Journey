#include <iostream>
using namespace std;

bool searchElement(int arr[], int size, int key)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)
    {
      cout << i;
      return 1;
    }
  }
  return 0;
}
int main()
{
  int arr[] = {17, 17, 87, 98, 18, 53, 2, 69, 74, 73, 20, 85, 59, 89, 84, 91, 84, 34, 44, 48, 20, 42, 68, 84, 8, 54, 66, 62, 69, 52, 67, 27, 87, 49, 92, 14, 92, 53, 22, 90, 60, 14, 8, 71, 0, 61, 94, 1, 22, 84, 10, 55, 55, 60, 98, 76, 27, 35, 84, 28, 4, 2, 9, 44, 86, 12, 17, 89, 35, 68, 17, 41, 21, 65, 59, 86, 42, 53, 0, 33, 80, 20};
  int size = sizeof(arr) / sizeof(arr[0]);
  int key;
  cout << "Enter the number : ";
  cin >> key;
  // Ternary Operator
  searchElement(arr, size, key) ? cout << "Key is Present" : cout << "Key is Absent";

  return 0;
}