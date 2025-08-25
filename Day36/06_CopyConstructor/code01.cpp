#include <iostream>
using namespace std;

class hero
{

private:
  int health;

public:
  char level;
  hero(int health , char level)
  {
    this->health = health;
    this->level = level;
    cout << "Simple Constructor called" << endl;
  }

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
  void print(){
    cout<<"Health : "<<this->health<<endl;
    cout<<"level : "<<this->level<<endl;
  }
};

int main()
{
  hero h1(70,'A');
  h1.print();
  hero h2(h1);
  h2.print();
  return 0;
}