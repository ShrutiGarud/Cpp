#include<iostream>
using namespace std;

class Base{
      public:
        int A,B;
        void Fun(){    //1000       defination
            cout<<"Base Fun\n";
        }
        virtual void Gun(){    //2000      defination
            cout<<"Base gun\n";
        }
        void Sun(){    //3000     defination
            cout<<"Base sun\n";
        }
        virtual void Mun(){    //4000     defination
            cout<<"Base Mun\n";
        }
};

class Derived:public Base{
      public:
        int X,Y;
        virtual void Gun(){    //5000        redefination
            cout<<"Derived Gun\n";
        }
        virtual void Sun(){   //6000           redefination
            cout<<"Derived sun\n";
        }
        virtual void Run(){   //7000          defination
            cout<<"Derived run\n";
        }
};

int main(){
    
    Derived dobj;
    Base *bp=&dobj;

   cout<<"size of base class object is:"<<sizeof(Base)<<"\n";
   cout<<"size of derived class object is:"<<sizeof(Derived)<<"\n";

   bp->Fun();   //base fun
   bp->Gun();   //derived gun
   bp->Sun();   //base sun
   bp->Mun();   //base mun
//    bp->Run();   //error

    return 0;
}