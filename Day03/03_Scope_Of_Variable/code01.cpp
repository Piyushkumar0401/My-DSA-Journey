#include<iostream>
using namespace std;

int main(){
int n=5;// Global Variable
cout<<n<<endl;;
if (1)
{
  int n=2;// Local Variable   
  cout<<n<<endl; 
  int n1 = 4;//Local Variable
  cout<<n1<<endl; 
  
}
cout<<n<<endl;
//cout<<n1<<endl;//error: 'n1' was not declared in this scope 

  return 0;
}