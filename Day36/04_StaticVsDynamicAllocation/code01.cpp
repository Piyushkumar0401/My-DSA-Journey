#include <iostream>
using namespace std;

class hero
{

private:
  int health;

public:
  char level ;

  int getHealth()
  {
    return health;
  }
  char getLevel()
  {
    return level;
  }
  void setHealth(int h)
  {
    health = h;
  }
  void setLevel(char l)
  {
    level = l;
  }
};

int main()
{
  // static allocation
  // hero ramukaka ;

  // Dynamic allocation
  hero *ramu = new hero;
  ramu->setLevel('A');
  cout << "Level by using dynamic allocation : " << (*ramu).getLevel() << endl;
  cout << "Level by using dynamic allocation : " << ramu->getLevel() << endl;

  return 0;
}