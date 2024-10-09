#include<iostream>
using namespace std;

bool isEvenOdd(int A){
  if(A%2==0){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  int num;
  bool Ret;

  cout<<"Enter Number is:";
  cin>>num;

  Ret=isEvenOdd(num);

  if(Ret){
    cout<<num<<" "<<"is Even number";
  }
  else{
    cout<<num<<" "<<"is odd number";
  }
  return 0;
}