#include<iostream>
using namespace std;

class Number{
    public:
      int Value;
      Number(int A){
        Value=A;
        cout<<"Inside constructor\n";
      }
      int EvenOdd(){
        if(Value%2==0){
          cout<<"Even Number\n";  
          return Value;
        }
        else{
          cout<<"odd Number\n";  
          return Value;
        }
      }
};

int main(){
    int Num,Ret;

    cout<<"Enter Number:\n";
    cin>>Num;
    
    Number finder(Num);
    Ret=finder.EvenOdd();
    
    cout<<"Number is: "<<Ret<<"\n";

    return 0;
}