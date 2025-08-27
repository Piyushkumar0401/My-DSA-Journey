#include <iostream>
using namespace std;

class LinkedList
{
public:
  int data;
  LinkedList *next;

  LinkedList(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

void InsertAtHead(LinkedList *&head, int data)
{

  // create a new node
  LinkedList* node2 = new LinkedList(data);

  node2->next = head; // n2->Node mai maine second wale ka head de diya 
  head = node2;
}

void print(LinkedList* &head){
  LinkedList* node2 = head;
  while (node2!=NULL)
  {
    cout<<node2->data<<" ";
    node2 = node2->next;
  }
  cout<<endl;
  
}

int main()
{
  // create a node
  LinkedList *node1 = new LinkedList(10);
  cout << node1->data << endl;
  cout << node1->next << endl;
  cout<<endl;

  // head point to node 1
  LinkedList* head = node1;

  print(head);
  
  InsertAtHead(head,12);
  print(head);

  InsertAtHead(head,15);
  print(head);

  return 0;
}