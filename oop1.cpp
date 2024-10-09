#include<iostream>
using namespace std;

//class declaration
class Demo{

    public://Access Specifier
       int no1;    //characterictics
       int no2;    //characterictics

       Demo(){     //constructor
        cout<<"Inside Constructor\n";
        no1=11;
        no2=21;
       }
       ~Demo(){    //destructor
        cout<<"Inside Destructor\n";
       }
       void Fun(){   //behaviour
        cout<<"Inside Fun of Demo class\n";
       }

};
int main(){
    cout<<"Inside main\n";
    Demo obj1;
    
    cout<<"size of oject is: "<<sizeof(obj1)<<"\n";

    cout<<"Value of no1: "<<obj1.no1<<"\n";
    cout<<"Value of no2: "<<obj1.no2<<"\n";
    obj1.Fun();


    return 0;
}