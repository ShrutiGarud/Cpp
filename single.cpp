#include<iostream>
using namespace std;

class Base{
    public:
        int A,B;
        Base(){
            cout<<"Inside Base constructor\n";
            A=11;
            B=21;
        }
        ~Base(){
            cout<<"Inside Base Destructor\n";
    
        }
        void fun(){
            cout<<"Inside base fun\n";
        }
  
};

class Derived:public Base{
       public:
        int X,Y;
        Derived(){
            cout<<"Inside Derived constructor\n";
            X=51;
            Y=101;
        }
        ~Derived(){
            cout<<"Inside Derived Destructor\n";
        }
        void Gun(){
            cout<<"Inside base Gun\n";
        }
};

int main(){
    
    Derived dobj;
    cout<<"size of the object is:"<<sizeof(dobj)<<"\n";

    cout<<dobj.A<<"\n";
    cout<<dobj.B<<"\n";
    cout<<dobj.X<<"\n";
    cout<<dobj.Y<<"\n";

    dobj.fun();
    dobj.Gun();

    return 0;
}