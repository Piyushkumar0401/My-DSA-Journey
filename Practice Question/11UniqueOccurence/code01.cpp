#include <iostream>
using namespace std;

int main()
{
  int arr[] = {1,2,2,1,1,3};
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++)
  {
    int index = i;
    for (int j = i; j < n; j++)
    {
      if (arr[i] > arr[j])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  for (int i = 0; i < n; i++)
  {
    int x = 0;
    for (int j = i; j < n; j++)
    {
      if(arr[i]==arr[j]) x++;

    }
    i=i+x;
  }
  

  return 0;
}