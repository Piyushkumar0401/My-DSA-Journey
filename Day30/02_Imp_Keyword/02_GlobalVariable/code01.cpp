#include <iostream>
using namespace std;

// BAD PRACTICE
// Global Variable
int score = 15;

void a()
{
  cout << score << endl;
}
void b()
{
  cout << score << endl;
}

int main()
{
  a();
  b();
  cout << score << endl;
  return 0;
}