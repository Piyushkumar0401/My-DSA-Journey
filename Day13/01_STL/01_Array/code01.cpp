#include<iostream>
#include<array>
using namespace std;

int main(){
// int arr[4]={1,2,3,4}
array<int,4>a={1,2,3,4};
int size = a.size();
for (int i = 0; i < size; i++)
{
  cout<<a[i]<<endl;
}
cout<<"The element is at index 2 : "<<a.at(2)<<endl;
cout<<"is empty : "<<a.empty()<<endl;
cout<<"the first element : "<<a.front()<<endl;
cout<<"the last element : "<<a.back()<<endl;
  return 0;
}