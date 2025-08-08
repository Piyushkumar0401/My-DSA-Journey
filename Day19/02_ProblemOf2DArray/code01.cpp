#include <iostream>
using namespace std;
bool searching(int arr[][3], int row, int column, int target)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; i < column; i++)
    {
      if (arr[i][j] == target)
        return true;
    } 
  }
  return false;
}

int main()
{
  int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int target;
  cout << "enter the element to find in 2D Arrays :- ";
  cin >> target;
  if (searching(arr, 3, 3, target))
    cout << "Target found";
  else
    cout << "Not Found";
  return 0;
}