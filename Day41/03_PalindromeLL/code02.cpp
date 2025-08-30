#include <iostream>
#include <vector>
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
Link *Middle(Link *head)
{
  Link *slow = head;
  Link *fast = head->next;
  while (fast != NULL)
  {
    slow = slow->next;
    fast = fast->next;
    if (fast != NULL)
    {
      fast = fast->next;
    }
  }
  return slow;
}
bool compare(Link *head, Link *middle)
{
  Link *p1 = head;
  Link *p2 = middle;
  while (p1 != middle && p2 != NULL)
  {
    if (p1->data != p2->data)
    {
      return 0;
    }
    p1 = p1->next;
    p2 = p2->next;
  }
  return 1;
}

bool isPalindrome(Link *head)
{
  if (head == NULL)
  {
    return 0;
  }
  if (head->next == NULL)
  {
    return 1;
  }
  Link *middle = Middle(head);
  middle = Reversed(middle);
  bool ans = compare(head, middle);
  middle= Reversed(middle);
  return ans;
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
  // l2->next = head;
  // head = l2;
  tail->next = l2;
  tail = tail->next;
}

int main()
{
  Link *l1 = new Link(1);
  Link *head = l1;
  Link *tail = l1;
  insertAtTail(tail, 3);
  insertAtTail(tail, 5);
  insertAtTail(tail, 5);
  insertAtTail(tail, 3);
  insertAtTail(tail, 1);
  print(head);
  cout << Middle(head)->data << endl;
  cout << "is palindrome or not : " << isPalindrome(head) << endl;
  print(head);
  return 0;
}