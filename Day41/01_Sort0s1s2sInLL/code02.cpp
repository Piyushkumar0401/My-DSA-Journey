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
  ~Link()
  {
    int value = this->data;
    if (this->next == NULL)
    {
      delete next;
      this->next == NULL;
      cout << "memory delete with value : " << value << endl;
    }
  }
};
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

void insertAtTail(Link *&tail, int data)
{
  Link *l2 = new Link(data);
  // l2->next = head;
  // head = l2;
  tail->next = l2;
  tail = tail->next;
}
Link *sort(Link *head)
{
  Link *curr = head;
  Link *zeroHead = new Link(-1);
  Link *zeroTail = zeroHead;
  Link *oneHead = new Link(-1);
  Link *oneTail = oneHead;
  Link *twoHead = new Link(-1);
  Link *twoTail = twoHead;

  while (curr != NULL)
  {
    int value = curr->data;
    if (value == 0)
    {
      insertAtTail(zeroTail, value);
    }
    else if (value == 1)
    {
      insertAtTail(oneTail, value);
    }
    else if (value == 2)
    {
      insertAtTail(twoTail, value);
    }
    curr = curr->next;
  }

  // merging
  if(oneHead != NULL) {//1s list is not empty
    zeroTail->next = oneHead->next;
  }
  else{//1s list is empty
    zeroTail->next = twoHead->next;
  }
  oneTail->next = twoHead->next;
  twoTail->next = NULL;
  // setup head
  head = zeroHead->next;
  // delete dummy node
  delete zeroHead; 
  delete oneHead; 
  delete twoHead; 

  return head;
}

int main()
{
  Link *l1 = new Link(1);
  Link *head = l1;
  Link *tail = l1;
  insertAtTail(tail, 0);
  insertAtTail(tail, 2);
  insertAtTail(tail, 1);
  insertAtTail(tail, 2);
  print(head);
  Link *ans = sort(head);
  print(ans);

  return 0;
}