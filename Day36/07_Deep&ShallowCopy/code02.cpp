#include <iostream>
#include <string.h>
using namespace std;

class hero
{

private:
  int health;

public:
  char *name;
  char level;
  hero()
  {
    name = new char[100];
  }
  hero(int health, char level)
  {
    this->health = health;
    this->level = level;
    cout << "Simple Constructor called" << endl;
  }
  // Copy Constructor
  hero(hero &h1)
  {
    char *ch = new char [strlen(h1.name) + 1];
    strcpy(ch,h1.name);
    this->name = ch;
    cout << "copy constructor called" << endl;
    this->health = h1.health;
    this->level = h1.level;
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
  // char getName()
  // {
  //   return name;
  // }
  void setName(char name[])
  {
    strcpy(this->name, name);
  }
  void print()
  {
    cout << "[ Health : " << this->health << " ";
    cout << "level : " << this->level << " ";
    cout << "name : " << this->name << " ]" << endl;
  }
};

int main()
{
  hero h1;
  h1.setHealth(12);
  h1.setLevel('A');
  char name[7] = "Babbar";
  h1.setName(name);
  h1.print();

  // use default copy constructor
  hero h2(h1);
  h2.print();
  h1.name[0]='G';
  h1.print();
  h2.print();
  return 0;
}