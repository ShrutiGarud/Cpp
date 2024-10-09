#include<iostream>
using namespace std;


class Demo{
    public:
       int X,Y;
       
       Demo()
       {
          X=10;
          Y=20;
       }
       void fun(){   //non constant function
        cout<<"Inside fun\n";
        X++;
        Y++;
       }
       void gun() const{   //constant function
        cout<<"Inside gun";
        // X++;
        // Y++;
       }
};

int main(){
    
    Demo obj1;
    const Demo obj2;

    obj1.fun();  //normal obj normal function
    obj1.gun();  //normal obj constant function

    obj2.fun();  //constant obj normal function         not allowed
    obj2.gun();  //constant obj constant function

    return 0;
}