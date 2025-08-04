#include <iostream>
using namespace std;
// reverse array after M position
void reverseArray(int arr[], int m ,int size)
{
  int i = m+1;
  int j = size - 1;
  while (i <= j)
  {
    swap(arr[i], arr[j]);
    i++;
    j--;
  }
} 
void print(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int m;
  cout<<"Enter the number after that you want to repeat : ";
  cin>>m;
  reverseArray(arr,m,n);
  print(arr,n);

  return 0;
}