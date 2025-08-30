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
bool check(vector<int> arr)
{
  int start = 0;
  int end = arr.size() - 1;
  while (start <= end)
  {
    if (arr[start] != arr[end])
    {
      return 0;
    }
    start++;
    end--;
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
  Link *temp = head;
  vector<int> arr;
  while (temp != NULL)
  {
    arr.push_back(temp->data);
    temp = temp->next;
  }
  return check(arr);
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
  cout << "is palindrome or not : " << isPalindrome(head) << endl;
  return 0;
}