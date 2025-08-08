#include <iostream>
using namespace std;

// i===row j==col
int main()
{
  int arr[5][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}, {4, 44, 444, 4444}, {5, 55, 555, 5555}};

  // row wise input
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     cin>>arr[i][j];
  //   }
  // }

  // colomn wise input
  // for (int i = 0; i < 4; i++)
  // {
  //   for (int j = 0; j < 5; j++)
  //   {
  //     cin>>arr[j][i];
  //   }
  // }

  // output
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  return 0;
}