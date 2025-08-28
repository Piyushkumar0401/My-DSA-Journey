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

//  void Reversed(Link *&head, Link *curr, Link *prev)
// {
//   if(curr == NULL){
//     head = prev;
//     return ;
//   }
//   Link* forward = curr->next;
//   Reversed(head,forward,curr);
//   curr->next=prev;
// }

Link *Reversed(Link *&head)
{
  // Base Case
  if (head == NULL || head->next == NULL)
  {
    return head;
  }
  Link* chotaHead = Reversed(head->next);
  head->next->next = head;
  head->next = NULL;
  return chotaHead;
}

void insertAtTail(Link *&tail, int data)
{
  Link *l2 = new Link(data);
  tail->next = l2;
  tail = tail->next;
}
void InsertAtHead(Link *&head, int data)
{

  // create a new node
  Link *node2 = new Link(data);

  node2->next = head; // n2->Node mai maine second wale ka head de diya
  head = node2;
}
void insertAtPosition(Link *&head, Link *&tail, int Position, int d)
{
  // insert at start
  if (Position == 1)
  {
    InsertAtHead(head, d);
    return;
  }
  Link *temp = head;
  int cnt = 1;
  while (cnt < Position - 1)
  {
    temp = temp->next;
    cnt++;
  }
  // insert at last
  if (temp->next == NULL)
  {
    insertAtTail(tail, d);
    return;
  }
  // creating a node for d
  Link *nodeToInsert = new Link(d);
  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;
}

int main()
{
  Link *l1 = new Link(10);
  Link *head = l1;
  Link *tail = l1;
  insertAtTail(tail, 20);
  insertAtTail(tail, 40);
  insertAtTail(tail, 50);
  insertAtPosition(head, tail, 3, 30);
  print(head);
  Link *curr = head;
  Link *prev = NULL;
  Link* ans = Reversed(head);
  print(ans);
  return 0;
}