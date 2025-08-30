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
void insertAtTail1(Link *&tail, int data)
{
  Link *l2 = new Link(data);
  // l2->next = head;
  // head = l2;
  tail->next = l2;
  tail = tail->next;
}

void insertAtTail(Link *&head, Link *&tail, int digit)
{
  Link *temp = new Link(digit);
  if (head == NULL)
  {
    head = temp;
    tail = temp;
    return;
  }
  else
  {
    tail->next = temp;
    tail = temp;
  }
}
Link *Reversed(Link *&head)
{
  // Base Case
  if (head == NULL || head->next == NULL)
  {
    return head;
  }
  Link *chotaHead = Reversed(head->next);
  head->next->next = head;
  head->next = NULL;
  return chotaHead;
}
Link *add(Link *temp1, Link *temp2)
{

  Link *ansHead = NULL;
  Link *ansTail = NULL;
  int carry = 0;
  int digit = 0;
  int sum = 0;
  while (temp1 != NULL && temp2 != NULL)
  {
    sum = carry + temp1->data + temp2->data;
    digit = sum % 10;
    insertAtTail(ansHead, ansTail, digit);
    carry = sum / 10;
    temp1 = temp1->next;
    temp2 = temp2->next;
  }
  while (temp1 != NULL)
  {
    sum = carry + temp1->data;
    digit = sum % 10;
    insertAtTail(ansHead, ansTail, digit);
    carry = sum / 10;
    temp1 = temp1->next;
  }
  while (temp2 != NULL)
  {
    sum = carry + temp2->data;
    digit = sum % 10;
    insertAtTail(ansHead, ansTail, digit);
    carry = sum / 10;
    temp2 = temp2->next;
  }
  while (carry != 0)
  {
    sum = carry;
    digit = sum % 10;
    insertAtTail(ansHead, ansTail, digit);
    carry = sum / 10;
  }
  return ansHead;
}
Link *reverseAndAdd(Link *head1, Link *head2)
{
  Link *temp1 = head1;
  Link *temp2 = head2;

  temp1 = Reversed(temp1);
  temp2 = Reversed(temp2);
  Link *ans = add(temp1, temp2);

  ans = Reversed(ans);
  return ans;
}
int main()
{
  Link *l1 = new Link(4);
  Link *head1 = l1;
  Link *tail1 = l1;
  insertAtTail1(tail1, 5);
  Link *l2 = new Link(3);
  Link *head2 = l2;
  Link *tail2 = l2;
  insertAtTail1(tail2, 4);
  insertAtTail1(tail2, 5);
  print(head1);
  print(head2);
  Link *ans = reverseAndAdd(head1, head2);
  print(ans);
  return 0;
}