#include<iostream>
#include<stdlib.h>
using namespace std;

class Demo{

    public:
       int A,B;
       Demo(){
         cout<<"Inside the constructor\n";
         A=11;
         B=21;
       }
       ~Demo(){
        cout<<"Inside Destructor\n";
       }
       void fun(){
        cout<<"Inside the fun\n";
       }
};

int main(){
    // Demo obj1;  statically allocate memeory
    
    Demo *p= new Demo;
    // Demo *p=(Demo*)malloc(sizeof(Demo));

    p->fun();

    cout<<p->A<<"\n";
    cout<<p->B<<"\n";

    delete p;
    // free(p);
    

    return 0;
}