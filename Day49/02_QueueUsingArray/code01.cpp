#include <iostream>
using namespace std;

class queue
{
public:
  int *arr;
  int front;
  int rear;
  int size;

  queue(int size)
  {
    this->size = size;
    arr = new int(size);
    front = 0;
    rear = 0;
  }
  void enqueue(int data)
  {
    if (rear == size)
    {
      cout << "queue is Full - overflow" << endl;
    }
    else
    {
      arr[rear] = data;
      rear++;
      cout << "Enqueue run successfully " << endl;
    }
  }
  void dequeue()
  {
    if (front == rear)
    {
      cout << "queue is empty - underflow " << endl;
    }
    else
    {

      arr[front] = -1;
      front++;
      if (front == rear)
      {
        front = 0;
        rear = 0;
      }
      cout << "dequeue run successfully " << endl;
    }
  }
  int frontEle()
  {
    if (front == rear)
    {
      cout << "Queue is empty " << endl;
      return -1;
    }
    else
    {
      cout << "front run successfully " << endl;
      return arr[front];
    }
  }
  bool empty()
  {
    if (front == rear)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
};

int main()
{
  queue q(5);
  cout << "Front of Queue : " << q.frontEle() << endl;
  cout << endl;
  q.enqueue(5);
  q.enqueue(6);
  cout << endl;
  cout << "Front of Queue : " << q.frontEle() << endl;
  cout << endl;
  q.enqueue(7);
  q.enqueue(8);
  q.enqueue(9);
  // q.enqueue(10);
  q.dequeue();
  cout << endl;
  cout << "Front of Queue : " << q.frontEle() << endl;
  cout << endl;
  q.dequeue();
  if (q.empty())
  {
    cout << "Queue is empty " << endl;
  }
  else
  {
    cout << "Queue is not empty " << endl;
  }
  cout << endl;
  q.dequeue();
  q.dequeue();
  cout << endl;
  cout << "Front of Queue : " << q.frontEle() << endl;
  cout << endl;
  q.dequeue();
  if (q.empty())
  {
    cout << "Queue is empty " << endl;
  }
  else
  {
    cout << "Queue is not empty " << endl;
  }
  cout << endl;
  cout << "Front of Queue : " << q.frontEle() << endl;

  return 0;
}