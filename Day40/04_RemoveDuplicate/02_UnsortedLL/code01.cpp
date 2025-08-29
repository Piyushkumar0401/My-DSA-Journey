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

void deleteNode(int position, Link *&head, Link *&tail)
{
  Link *curr = head;
  Link *prev = NULL;
  int cnt = 1;
  if (position == 1)
  {
    Link *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
    return;
  }
  else
  {
    while (cnt < position)
    {
      prev = curr;
      curr = curr->next;
      cnt++;
    }
    prev->next = curr->next;
    if (cnt == position)
    {
      tail = prev;
    }
    curr->next = NULL;
    delete curr;
  }
}

Link *duplicate(Link *head)
{
  if (head == NULL)
  {
    return NULL;
  }
  Link *curr = head;
  while (curr != NULL)
  {
    Link *temp = curr;
    while(temp->next!=NULL){
      if(temp->next->data == curr->data){
      Link * forward = temp->next->next;
      Link * nodeToDelete = temp->next;
      delete nodeToDelete;
      temp->next = forward;
      }else{
      temp = temp->next;
    }
    curr = curr->next;
  }
  return head;
}
}

int main()
{
  Link *l1 = new Link(10);
  Link *head = l1;
  Link *tail = l1;
  insertAtTail(tail, 20);
  insertAtTail(tail, 40);
  insertAtTail(tail, 30);
  insertAtTail(tail, 30);
  insertAtTail(tail, 20);
  insertAtTail(tail, 30);
  insertAtTail(tail, 40);
  print(head);
  Link *ans = duplicate(head);
  print(ans);

  return 0;
}