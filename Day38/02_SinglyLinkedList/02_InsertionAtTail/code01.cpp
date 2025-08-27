#include <iostream>
using namespace std;

class Link
{
public:
  int data;
  Link *next;

  Link(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

void insertAtTail(Link *&tail, int data)
{
  Link* l2 = new Link(data);
  // l2->next = head;
  // head = l2;
  tail->next = l2;
  tail = tail->next;

}
void print(Link *&head)
{
  Link *l2 = head;
  while (l2 != NULL)
  {
    cout << l2->data << " ";
    l2 = l2->next;
  }
  cout << endl;
}

int main()
{
  Link *l1 = new Link(10);
  Link *head = l1;
  Link *tail = l1;
  insertAtTail(tail,20);
  insertAtTail(tail,30); 
  print(head);

  return 0;
}