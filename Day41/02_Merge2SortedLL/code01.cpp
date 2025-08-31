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
Link *merge2Sort(Link *&head1, Link *&head2)
{
  if (head1->next == NULL)
  {
    head1->next = head2;
    return head1;
  }
  Link *curr1 = head1;
  Link *next1 = curr1->next;
  Link *curr2 = head2;
  Link *forward = curr2->next;
  while (next1 != NULL && curr2 != NULL)
  {
    if ((curr2->data >= curr1->data) && (curr2->data < next1->data))
    {
      curr1->next = curr2;
      forward = curr2->next;
      curr2->next = next1;
      // updating pointer
      curr1 = curr2;
      curr2 = forward;
    }
    else
    {
      curr1 = curr1->next;
      next1 = next1->next;
      if (next1 == NULL)
      {
        curr1->next = curr2;
        return head1;
      }
    }
  }

  return head1;
}

Link *check(Link *head1, Link *head2)
{

  if (head1 == NULL)
  {
    return head2;
  }
  if (head2 == NULL)
  {
    return head1;
  }
  if (head1->data <= head2->data)
  {
    Link*ans = merge2Sort(head1, head2);
    return ans;
  }
  else
  {
    Link*ans = merge2Sort(head2, head1);
    return ans;
  }
}

int main()
{
  Link *l1 = new Link(1);
  Link *head1 = l1;
  Link *tail1 = l1;
  insertAtTail(tail1, 3);
  insertAtTail(tail1, 6);
  Link *l2 = new Link(2);
  Link *head2 = l2;
  Link *tail2 = l2;
  insertAtTail(tail2, 4);
  insertAtTail(tail2, 5);
  print(head1);
  print(head2);
  Link *ans = check(head1, head2);
  print(ans);
  return 0;
}