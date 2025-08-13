#include <iostream>
using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  cout << "address of first memory block : " << arr << endl;
  cout << "address of first memory block : " << &arr[0] << endl;

  cout << "value at 0th index : " << *arr << endl;
  
  int *z = &arr[5];
  cout << "value at 5th index : " << *z << endl;
  
  cout << "address at 1st index : " << (arr+1) << endl;
  cout << "address at 1st index : " << &arr[1] << endl;
  cout << "value at 1st index : " << *(arr+1) << endl;
  cout << "value at 1st index : " << *(&arr[1]) << endl;
  cout << "value at 1st index : " << 1[arr] << endl;
  
  int brr[]={2,3,4};
  int *p = &brr[0];
  cout << "address at 0th index : " << p << endl;
  int **q = &p;
  cout << "address of p : " << q << endl;
  


  int temp[10]={0};
  cout<<"size of temp : "<<sizeof(temp)<<endl;
  int *xyz = temp;
  cout<<"size of pointer xyz : "<<sizeof(xyz)<<endl; 
  cout<<"size of address to store pointer address : "<<sizeof(&xyz)<<endl;



  
  

  return 0;
}