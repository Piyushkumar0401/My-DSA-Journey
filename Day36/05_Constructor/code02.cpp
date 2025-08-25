#include <iostream>
using namespace std;

class hero
{
public:
  int health;
  hero()
  {
    cout << "this : " << this << endl;
    cout << "Constructor call" << endl;
  }
  hero(int health)
  {
    (*this).health = health;
    cout << "this : " << this << endl;
    this->health = health;
    cout << "health : " << this->health << endl;
  }
};

int main()
{

  hero h1(10);
  hero h2(20);
  cout << "address of h1 : " << (&h1) << endl;
  cout << "address of h2 : " << (&h2) << endl;

  return 0;
}