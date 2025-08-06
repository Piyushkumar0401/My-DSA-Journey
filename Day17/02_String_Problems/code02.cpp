#include<iostream>
using namespace std;


int getlength(char name[])
{
  int count = 0;
  for (int i = 0; name[i]!='\0'; i++)
  {
    count++;
  }
  return count;
}
void reverse(char name[],int n){
  int start = 0;
  int end = n-1;
  while(start<end){
    swap(name[start++],name[end--]);
  }
  cout<<name;
}

int main(){
char name[20] = "LoveBabbar";
int n = getlength(name);
reverse(name,n);
  return 0;
}