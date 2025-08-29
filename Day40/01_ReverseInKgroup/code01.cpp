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
      this->next = NULL;
      cout << "Memory Free with value : " << value << endl;
    }
  }
};

// REVERSE IN K GROUP

Link *reverseInKgroup(Link *&head, int k)
{
  // Base Call
  if (head == NULL)
  {
    return NULL;
  }
  // step1: reverse first k nodes
  Link *next = NULL;
  Link *curr = head;
  Link *prev = NULL;
  int cnt = 0;
  while (curr != NULL && cnt < k)
  {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    cnt++;
  }
  // step 2:recursion dekh lega aage ka;
  if (next != NULL)
  {
    head->next = reverseInKgroup(next, k);
  }
  // step 3:return head of reverse list
  return prev;
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
  insertAtTail(tail, 20);
  insertAtTail(tail, 40);
  insertAtTail(tail, 50);
  insertAtPosition(head, tail, 3, 30);
  insertAtTail(tail, 60);
  print(head);
  Link *curr = head;
  Link *prev = NULL;
  Link *ans = reverseInKgroup(head, 2);
  print(ans);
  return 0;
}