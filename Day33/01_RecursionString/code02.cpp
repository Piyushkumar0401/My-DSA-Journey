#include <iostream>
using namespace std;

bool reverse(string &str1, int start, int end)
{
  if (start > end)
  {
    return 1;
  }
  if (str1[start] == str1[end])
    reverse(str1, start + 1, end - 1);
  else
  {
    return 0;
  }
}

int main()
{
  string str = "abcda";
  int start = 0;
  int end = 4;
  string str1 = str;

  if (reverse(str, start, end))
    cout << "palindrome";
  else
    cout << "not palindrome";

  return 0;
}