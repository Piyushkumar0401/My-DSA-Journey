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

// Middle of Linked List -> data bta rha h
// int middleOfLinkedList(Link *&head, int len)
// {
//   Link *temp1 = head;
//   int position = len / 2 + 1;
//   int cnt = 1;
//   while (cnt < position)
//   {
//     head = head->next;
//     cnt++;
//   }
//   return head->data;
// }

// Optimise Solution
Link* middleOfLinkedList(Link *&head)
{
  if (head == NULL)
  {
    return head;
  }
  if (head->next == NULL)
  {
    return head;
  }
  // if (head->next->next == NULL)
  // {
  //   return head->next->data;
  // }
  Link *fast = head->next;
  Link *slow = head;
  while (fast != NULL)
  {
    fast = fast->next;
    if (fast != NULL)
    {
      fast = fast->next;
    }
    slow = slow->next;
  }
  return slow;
}

int getLength(Link *&head)
{
  Link *temp = head;
  int cnt = 0;
  while (temp != NULL)
  {
    temp = temp->next;
    cnt++;
  }
  return cnt;
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
  insertAtTail(tail, 60);
  insertAtTail(tail, 70);
  insertAtTail(tail, 80);
  print(head);
  // int len = getLength(head);
  // cout << "Middle of the LinkedList : " << middleOfLinkedList(head, len) << endl;
  cout << "Middle of the LinkedList : " << middleOfLinkedList(head)->data << endl;
  return 0;
}