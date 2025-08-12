#include<iostream>
using namespace std;

int main(){
  int a = 6;
  cout<<"The value of a :- "<<a<<endl;
  //address of operator -> '&'
  cout<<"The address of a : "<<&a<<endl;
  // pointer-> use to store Address

  // int *ptrr;
  //  never do this  -> pointer to int is created , and pointing   to some garbage address

  int *ptr = &a;
  a = a + 1;
  cout<<a<<endl;
  
  cout<<"The address store in a pointer : "<<ptr<<endl;
  cout<<"The variable access by using pointer : "<<(*ptr)<<endl;
  (*ptr)++;
  cout<<"The value of a change using pointer : "<<a<<endl;
  // address of a pointer
  cout<<"The address of pointer ptr : "<<&ptr<<endl;
  cout<<"size of ptr pointer : "<<sizeof(ptr)<<endl;

  
  char ch = 'a';
  char *y = &ch;
  // cout<<"The variable access by using pointer : "<<y<<endl;
  cout<<"The address store in a pointer : "<<&y<<endl;
  cout<<"The variable access by using pointer : "<<(*y)<<endl;
  
  // size of pointer
  cout<<"size of y pointer : "<<sizeof(y)<<endl;
  
  // segmentation fault 
  int *ptrrr = 0;
  cout<<"The variable access by using pointer : "<<(*ptrrr)<<endl;

  



  return 0;
}