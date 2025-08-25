#include <iostream>
using namespace std;

class hero
{

private:
  int health;

public:
  char level;

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
  hero ramukaka ;
  ramukaka.setHealth(70);
  ramukaka.setLevel('A');
  cout<<"Ramukaka health is : "<<ramukaka.getHealth()<<endl;
  cout<<"Ramukaka Level is : "<<ramukaka.getLevel()<<endl;

  return 0;
}