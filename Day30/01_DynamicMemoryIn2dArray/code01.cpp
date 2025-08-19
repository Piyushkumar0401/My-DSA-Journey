#include <iostream>
using namespace std;

int main()
{
  int m, n;
  cin >> m >> n;
  // n - > row number
  // m - > column number

  // dynamic memory allocation of 2D arrays
  int **arr = new int *[n];

  for (int i = 0; i < n; i++)
  {
    arr[i] = new int[m];
  }

  // Taking Input

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }

  // Print Output
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  // memory clean
  for (int i = 0; i < n; i++)
  {
    delete[] arr[i];
  }

  return 0;
}