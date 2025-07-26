#include <iostream>
using namespace std;


void swapAlternate(int arr[], int size)
{
  for (int i = 0; i < size; i += 2)
  {
    if((i+1)<size) swap(arr[i], arr[i + 1]);
    // i = 4 or i+1 = 5 hoga yani size se Zyada toh us case ke lie;
  }
}

void arrPrint(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  int arr[6] = {1, 2, 3, 4, 5, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  swapAlternate(arr, size);
  arrPrint(arr, size);
  return 0;
}