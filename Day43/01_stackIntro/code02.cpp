#include <iostream>
using namespace std;

// stack implementation using arrays

class Stack
{
  // properties
public:
  int *arr;
  int top;
  int size;

  // behaviour
  Stack(int size)
  {
    // (*this).size = size;
    this->size = size;
    arr = new int[size];
    top = -1;
  }

  void push(int element)
  {
    if (top >= size-1)
    {
      cout << "stack overflow" << endl;
    }
    else
    { 
      top++;
      arr[top] = element;
      cout<<"push function performed"<<endl;
    }
  }
  void pop()
  {
    if (top == -1)
    {
      cout << "stack underflow" << endl;
    }
    else
    {
      top--;
      cout<<"pop function performed"<<endl;
    }
  }
  void empty()
  {
    if (top == -1)
    {
      cout << "stack is empty" << endl;
    }
    else
    {
      cout << "stack is not empty" << endl;
    }
  }

  void Top()
  {
    if (top == -1)
    {
      cout << "Stack underflow" << endl;
    }
    else
    {
      cout << "Top element : " << arr[top] << endl;
    }
  }
};

int main()
{
  // Stack *s1 = new Stack(5);//dynamic memory allocation
  // s1->push(1);
  // s1->push(2);
  // s1->push(3);
  // s1->push(4);
  // s1->push(5);
  // s1->empty();
  // s1->Top();
  // s1->pop();
  // s1->push(5);
  // s1->push(6);

  Stack s1(5); 
  s1.push(1);
  s1.push(2);
  s1.push(3);
  s1.push(4);
  s1.push(5);
  s1.empty();
  s1.Top();
  s1.pop();
  s1.Top();
  s1.push(5);
  s1.push(6);  
  return 0;
}