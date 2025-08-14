#include<iostream>
using namespace std;

void update(int **p){
  // p = p + 1;
  // *p = *p + 1;
  **p = **p + 1;
  cout<<"sab badhiya chal rha h "<<endl;

}

int main(){
int value = 5;
int *ptr = &value;
int **gtr = &ptr;

cout<<"before gtr address : "<<gtr<<endl;
cout<<"before : "<<**gtr<<endl;
cout<<"before value : "<<value<<endl;
cout<<"before ptr : "<<ptr<<endl;

update(gtr);

cout<<"after gtr address : "<<gtr<<endl;
cout<<"after gtr value : "<<**gtr<<endl;
cout<<"after value : "<<value<<endl;
cout<<"before ptr : "<<ptr<<endl;

return 0;
}