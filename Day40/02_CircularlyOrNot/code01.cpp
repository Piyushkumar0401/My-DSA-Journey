#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
  ~Node()
  {
    int value = this->data;
    if (this->next == NULL)
    {
      delete next;
      next = NULL;
      cout << "Memory is Free  for node with Data " << value << endl;
    }
  }
};

bool isCircular(Node *head)
{
  // empty List
  if (head == NULL)
  {
    return 1;
  }
  else
  {
    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
      temp=temp->next;
    }
    if(temp==head){
      return 1;
    }
    else{
      return 0;
    }
  }
}
// void insertAtHead() {}
// void insertAtTail() {}
// void insertAtPositon() {}
// void deleteNode() {}
// void getLength() {}
// void print() {}

void insertNode(Node *&tail, int element, int d)
{
  // Assuming that the element is present in the list

  // empty list
  if (tail == NULL)
  {
    Node *node1 = new Node(d);
    tail = node1;
    node1->next = node1;
  }
  else
  { // non empty list
    Node *curr = tail;
    while (curr->data != element)
    {
      curr = curr->next;
    }

    // element found -> curr is represent that element node
    Node *temp = new Node(d);
    temp->next = curr->next;
    curr->next = temp;
  }
}
void deletionNode(Node *&tail, int element)
{
  if (tail == NULL)
  {
    cout << "List is empty " << endl;
    return;
  }
  else
  {
    Node *prev = tail;
    Node *curr = prev->next;
    while (curr->data != element)
    {
      prev = curr;
      curr = curr->next;
    }
    prev->next = curr->next;
    if (curr == prev)
    {
      tail = NULL;
    }
    else if (tail == curr)
    {
      tail = prev;
    }
    curr->next = NULL;
    delete curr;
  }
}
void print(Node *&tail)
{
  Node *temp = tail;
  if (temp == NULL)
  {
    cout << "List is Empty " << endl;
  }
  do
  {
    cout << tail->data << " ";
    tail = tail->next;
  } while (tail != temp);
  cout << endl;
}

int main()
{
  // Node *node1 = new Node(10);

  // Node *head = node1;  iski jarurat nahi padti yaha
  Node *tail = NULL;
  insertNode(tail, 5, 10);
  print(tail);
  insertNode(tail, 10, 20);
  print(tail);
  insertNode(tail, 20, 40);
  print(tail);
  insertNode(tail, 20, 30);
  print(tail);
  // deletionNode(tail, 40);
  // deletionNode(tail, 10);
  // print(tail);
  cout<<isCircular(tail);

  return 0;
}