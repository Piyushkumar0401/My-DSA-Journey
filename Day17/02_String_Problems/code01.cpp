#include <iostream>
using namespace std;

int getlength(char name[])
{
  int count = 0;
  for (int i = 0; name[i]!='\0'; i++)
  {
    count++;
  }
  return count;
  
  // while (1)
  // {
  //   if (name[i] == '\0')
  //   {
  //     return i;
  //   }
  //   i++;
  // }
}

int main()
{
  char name[20];
  cin >> name;

  cout << getlength(name);
  return 0;
}