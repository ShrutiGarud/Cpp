#include<iostream>
using namespace std;

class Base{
      public:
        int A,B;
        void Fun(){    //1000       defination
            cout<<"Base Fun\n";
        }
        void Gun(){    //2000      defination
            cout<<"Base gun\n";
        }
        void Sun(){    //3000     defination
            cout<<"Base sun\n";
        }
};

class Derived:public Base{
      public:
        int X,Y;
        void Gun(){    //4000        redefination
            cout<<"Derived Gun\n";
        }
        void Sun(){   //5000           redefination
            cout<<"Derived sun\n";
        }
        void Run(){   //6000          defination
            cout<<"Derived run\n";
        }
};

int main(){
    
    Base bobj;
    Derived dobj;

    bobj.Fun();   //Base fun 
    bobj.Gun();   //BAse gun
    bobj.Sun();   //base sun

    dobj.Fun();   //base fun
    dobj.Gun();   //derived gun
    dobj.Sun();   //derived sun
    dobj.Run();   //derived run


    return 0;
}