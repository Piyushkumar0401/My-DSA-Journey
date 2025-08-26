#include <iostream>
using namespace std;

// Combination of more than 1 type of inheritance

class Human
{
public:
  int eye;
  int hand;
};

class Men
{
public:
  int legs;
};
// single inheritance
class Women : public Human
{
public:
  int bt;
};
// multiple inheritance
class child : public Women, public Men
{
public:
  int jhonsonBaby;
};

int main()
{
  return 0;
}