#include <iostream>
#include <vector>
using namespace std;
bool isSafe(int x, int y, int n, vector<vector<int>> &visitedArr, vector<vector<int>> &maze)
{
  if ((x >= 0 && x < n) && (y >= 0 && y < n) && visitedArr[x][y] == 0 && maze[x][y])
  {
    return true;
  }
  return false;
}

void solve(vector<vector<int>> &maze, int n, vector<string> &ans, int srcX, int srcY, vector<vector<int>> &visitedArr, string path)
{

  // Base case: reached destination
  if (srcX == n - 1 && srcY == n - 1)
  {
    ans.push_back(path);
    return;
  }

  visitedArr[srcX][srcY] = 1;

  // Down
  int newX = srcX + 1;
  int newY = srcY;
  if (isSafe(newX, newY, n, visitedArr, maze))
  {
    path.push_back('D');
    solve(maze, n, ans, newX, newY, visitedArr, path);
    path.pop_back();
  }

  // Right
  newX = srcX;
  newY = srcY + 1;
  if (isSafe(newX, newY, n, visitedArr, maze))
  {
    path.push_back('R');
    solve(maze, n, ans, newX, newY, visitedArr, path);
    path.pop_back();
  }

  // Left
  newX = srcX;
  newY = srcY - 1;
  if (isSafe(newX, newY, n, visitedArr, maze))
  {
    path.push_back('L');
    solve(maze, n, ans, newX, newY, visitedArr, path);
    path.pop_back();
  }

  // Up
  newX = srcX - 1;
  newY = srcY;
  if (isSafe(newX, newY, n, visitedArr, maze))
  {
    path.push_back('U');
    solve(maze, n, ans, newX, newY, visitedArr, path);
    path.pop_back();
  }

  visitedArr[srcX][srcY] = 0; // backtrack
}
vector<string> ratInMaze(vector<vector<int>> &maze)
{
  int n = maze.size();
  vector<string> ans;

  if (maze[0][0] == 0)
    return ans;

  vector<vector<int>> visitedArr(n, vector<int>(n, 0));

  string path = "";
  solve(maze, n, ans, 0, 0, visitedArr, path);

  return ans;
}
int main()
{
vector<vector<int>>maze={{1,1},{0,1}};
vector<string>ans = ratInMaze(maze);
for (int i = 0; i < ans.size(); i++)
{
  cout<<ans[i]<<" ";
}

  return 0;
}