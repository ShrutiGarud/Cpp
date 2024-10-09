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

class DerivedX :public Derived{

    public:
        int P;
        DerivedX(){
            cout<<"Inside DerivedX constructor\n";
            P=111;
        }
        ~DerivedX(){
            cout<<"Inside DerivedX destructor\n";
        }
        void Sun(){
            cout<<"Inside DerivedX sun\n";
        }
};
int main(){
    
    DerivedX dobj; //constructor of base constructor of derived contrsuctor of DeivedX
    cout<<"size of the object is:"<<sizeof(dobj)<<"\n"; //20

    cout<<dobj.A<<"\n";  //11
    cout<<dobj.B<<"\n";  //21
    cout<<dobj.X<<"\n";  //51
    cout<<dobj.Y<<"\n";  //101
    cout<<dobj.P<<"\n";  //111


    dobj.fun();
    dobj.Gun();
    dobj.Sun();

    return 0;
}