#include <iostream>
#include <string.h>
using namespace std;
bool isPalindrome(string s)
{
  int n = s.size();
  int st = 0;
  int e = n - 1;
  while (st < e)
  {

    if (s[st] != s[e])
    {
      return false;
    }
    st++;
    e--;
  }
  return true;
}

int main()
{
  string s = "ABCBA ABCBA";
 cout<<isPalindrome(s);
  return 0;
}