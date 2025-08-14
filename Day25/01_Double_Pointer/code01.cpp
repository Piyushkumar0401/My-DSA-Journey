#include <iostream>
using namespace std;

int main()
{

  cout << endl;
  int i = 5;
  int *ptr = &i;
  cout << ptr << endl;
  cout << endl;

  // Double pointer
  int **gtr = &ptr;
  cout << "address of P : " << &ptr << endl;
  cout << "address of p : " << gtr << endl;
  cout << "Value of ptr : " << ptr << endl;
  cout << "Value of ptr : " << *gtr << endl;

  cout << endl;
  int ***ktr = &gtr;
  cout << "address of P : " << &gtr << endl;
  cout << "address of p : " << ktr << endl;
  cout << endl;

  // how to print i
  cout<<"how to print i : "<<endl;
  cout << "first method : " << i << endl;
  cout << "second method : " << *ptr << endl;
  cout << "third method : " << **gtr << endl;
  cout << endl;
  
  // how to print ptr
  cout<<"how to print ptr : "<<endl;
  cout << "first method : " << ptr << endl;
  cout << "second method : " << *gtr << endl;
  cout << "third method : " << &i << endl;
  cout << endl;
  
  // how to print gtr 
  cout<<"how to print gtr : "<<endl;
  cout << "first method : " << &ptr << endl;
  cout << "second method : " << gtr << endl;
  cout << endl;
  cout << endl;
  
  return 0;
}