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
  int zeroCount = 0;
  int oneCount = 0;
  int twoCount = 0;
  Link *temp = head;
  while (temp != NULL)
  {
    if (temp->data == 0)
    {
      zeroCount++;
    }
    else if (temp->data == 1)
    {
      oneCount++;
    }
    else if (temp->data == 2)
    {
      twoCount++;
    }
    temp = temp->next;
  }
  temp = head;
  while(temp!=NULL){
    if(zeroCount!=0){
      temp->data = 0;
      zeroCount--;
    }
    else if(oneCount!=0){
      temp->data = 1;
      oneCount--;
    }
    else if(twoCount!=0){
      temp->data = 2;
      twoCount--;
    }
    temp = temp->next;
  }
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
  print(head);

  return 0;
}