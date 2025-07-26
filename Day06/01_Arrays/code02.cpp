#include<iostream>
using namespace std;
void printArray(char arr[],int n)
{
  cout << "printing the element of array : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
int main(){
// float arr[4]={1.2,1.4,1.2,1.3};
char arr[4]={'a','b','c','d'};
int n = sizeof(arr) / sizeof(arr[0]);
printArray(arr,n);
  return 0;
}