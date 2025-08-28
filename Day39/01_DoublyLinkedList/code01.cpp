#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *prev;
  Node *next;

  Node(int d)
  {
    this->data = d;
    this->prev = NULL;
    this->next = NULL;
  }
  ~Node()
  {
    int value = this->data;
    if (this->next == NULL)
    {
      delete next;
      this->next = NULL;
      cout << "Memory free " << value << endl;
    }
  }
};

void insertAtHead(Node *&tail, Node *&head, int d)
{
  if (head == NULL)
  {
    Node *temp = new Node(d);
    head = temp;
    tail = temp;
  }
  else
  {
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
  }
}

void insertAtTail(Node *&head, Node *&tail, int d)
{
  if (head == NULL)
  {
    Node *temp = new Node(d);
    head = temp;
    tail = temp;
  }
  else
  {
    Node *temp = new Node(d);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
  }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
  Node *h = head;
  Node *needToInsert = new Node(d);
  int cnt = 1;
  if (position == 1)
  {
    insertAtHead(head, tail, d);
    return;
  }
  while (cnt < position - 1)
  {
    h = h->next;
    cnt++;
  }
  if (h->next == NULL)
  {
    insertAtTail(head, tail, d);
    return;
  }

  needToInsert->next = h->next;
  h->next->prev = needToInsert;
  h->next = needToInsert;
  needToInsert->prev = h;
}

void deletionAtPosition(int position, Node *&head, Node *&tail)
{
  if (position == 1)
  {
    Node *temp = head;
    head = temp->next;
    temp->next->prev = NULL;
    temp->next = NULL;
    delete temp;
  }
  else
  {
    Node *current = head;
    Node *previous = NULL;
    int cnt = 1;
    while (cnt < position)
    {
      previous = current;
      current = current->next;
      cnt++;
    }
    current->prev = NULL;
    previous->next = current->next;
    current->next = NULL;
    tail = previous;
    delete current;
  }
}

void print(Node *&head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int getLength(Node *&head)
{
  int len = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    len++;
    temp = temp->next;
  }
  cout << "Length : " << len << endl;
}

int main()
{

  Node *node1 = new Node(10);
  Node *head = node1;
  Node *tail = node1;
  print(head);
  getLength(head);

  // insertAtHead(head,20);
  // print(head);
  // insertAtHead(head,30);
  // print(head);
  // insertAtHead(head,40);
  // print(head);
  // insertAtHead(head,50);
  // print(head);

  insertAtTail(head, tail, 20);
  print(head);
  insertAtTail(head, tail, 30);
  print(head);
  insertAtTail(head, tail, 40);
  print(head);
  insertAtTail(head, tail, 50);
  print(head);
  getLength(head);

  insertAtPosition(head, tail, 3, 70);
  insertAtPosition(head, tail, 4, 100);
  getLength(head);
  cout << head->data << endl
       << tail->data << endl;
  insertAtPosition(head, tail, 8, 80);
  // insertAtPosition(head,tail,2,30);
  print(head);

  deletionAtPosition(1, head, tail);
  print(head);
  getLength(head);
  deletionAtPosition(7, head, tail);
  print(head);
  deletionAtPosition(3, head, tail);
  print(head);
  cout<<endl<<head->data<<endl;
  cout<<endl<<tail->data<<endl;

  return 0;
}