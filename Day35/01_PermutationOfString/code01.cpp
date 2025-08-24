#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> arr, int index, vector<vector<int>> &ans)
{
  if (index >= arr.size())
  {
    ans.push_back(arr);
    return;
  }

  for (int i = index; i < arr.size(); i++)
  {
    swap(arr[index], arr[i]);
    solve(arr, index + 1, ans);
    swap(arr[index], arr[i]);
  }
}

int main()
{
  vector<int> arr = {1, 2, 3};
  int index = 0;
  vector<vector<int>> ans;
  solve(arr, index, ans);
  for (size_t i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[0].size(); j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}