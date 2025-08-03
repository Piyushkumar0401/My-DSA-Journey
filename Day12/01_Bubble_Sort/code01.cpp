#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    int swap2 = 0;
  for (int i = 1; i < size; i++)
  {
    bool swap1 = false;
    for (int j = 0; j < (size - i); j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        swap1 = true;
        swap2++;
      }
    }
    if (swap1 == false)
      break;
  }
  cout<<swap2<<endl;
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
int arr[]={ 8, 22, 7, 9, 31, 5, 13};
int size = sizeof(arr)/sizeof(arr[0]);
bubbleSort(arr,size);
print(arr,size);
  return 0;
} 