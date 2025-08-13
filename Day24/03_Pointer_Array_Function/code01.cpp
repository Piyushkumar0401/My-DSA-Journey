#include <iostream>
using namespace std;
// pointer ban jata hai !
int getSum(int *arr, int count)
{
  int sum = 0;
  for (int i = 0; i < count; i++)
  {
    sum = sum + arr[i];
  }
  return sum;
}
// int getSum(int arr[], int count)
// {
//   int sum = 0;
//   for (int i = 0; i < count; i++)
//   {
//     sum = sum + arr[i];
//   }
//   return sum;
// }

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << "The sum of an array of size 5 is : " << getSum(arr+3, 2);

  return 0;
}