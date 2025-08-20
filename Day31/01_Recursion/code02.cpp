#include<iostream>
using namespace std;

int powerOf2(int n){
  if(n==0){
    return 1;
  }
  int smallProblem = powerOf2(n-1);
  int biggerProblem = 2 * smallProblem;

  return biggerProblem;
}

int main(){
  int n;
  cin>>n;
  cout<<powerOf2(n);
  return 0;
}