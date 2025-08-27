#include <iostream>
using namespace std;

// Practice one more time
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
};

void insert(Node* &head , int data){
  Node* n2 = new Node(data);
  n2->next = head;
  head = n2;
}
void print(Node *&head)
{
  Node*n1 = head;
  while(n1 != NULL){
    cout<<n1->data<<endl;
    n1=n1->next;

  }
}

int main()
{
  Node *n1 = new Node(40);
  Node *head = n1;
  insert(head,30);
  insert(head,20);
  insert(head,10);
  print(head);
  return 0;
}