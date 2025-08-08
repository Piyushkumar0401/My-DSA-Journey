#include <iostream>
#include<limits.h>
using namespace std;
void rowWiseSum(int arr[][3], int rows, int column)
{
  int sum = 0;
  int max = __WINT_MIN__; 
  int index = -1  ;
  for (int i = 0; i < rows; i++)
  {
    sum = 0;
    for (int j = 0; j < column; j++)
    {
      sum = sum + arr[i][j];
    }
    cout << "Sum of rows " << i + 1 << " :- " << sum;
    if (max < sum)
    {
      max = sum;
      index = i;
    }
    cout << endl;
  }
  cout << "The maximum largest row sum of index " << index+1<<" is :- "<<max;
}
int main()
{
  int arr[3][3] = {5,5,5,4,4,4,3,3,3};
  rowWiseSum(arr, 3, 3);
  return 0;
}