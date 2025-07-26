#include <iostream>
using namespace std;

bool searchElement(int arr[], int size, int key)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)
      return 1;
  }
  return 0;
}
int main(){
  int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  int key;
  cout << "Enter the number : ";
  cin >> key;
  // Ternary Operator
  searchElement(arr, size, key) ? cout << "Key is Present" : cout << "Key is Absent";

  return 0;
}