#include <iostream>
using namespace std;

class hero
{

private:
  int health;

public:
  char level;
  hero()
  {
    cout << "Constructor" << endl;
  }
  // destructor
  ~hero()
  {
    cout << "Destructor" << endl;
  }
};

int main()
{
  hero h1;             // static
  hero *h2 = new hero; // Dynamic
  // Manually for dynamic
  delete h2;
  return 0;
}