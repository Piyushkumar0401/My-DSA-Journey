#include <iostream>
using namespace std;

void print(int arr[], int size, int start = 0)
{
  for (int i = start; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int arr[5] = {1, 4, 7, 8, 9};
  int size = sizeof(arr) / sizeof(arr[0]);
  // int start;
  // cin >> start;
  print(arr, size);
  cout<<endl;
  print(arr, size , 2);
  return 0;
}