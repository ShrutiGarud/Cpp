#include<iostream>
using namespace std;

class Marvellous {
    public:
      int C;
      Marvellous(){
        C=30;
        cout<<"Inside Marvellous constructor\n";
      }
      ~Marvellous(){
        cout<<"Inside Marvellous destructor\n";
      }
      void Sun(){
        cout<<"inside sun of Marvelous\n";
      }

};

class Demo : public Marvellous{
    public:
      int A;
      Demo(){
        A=10;
        cout<<"Inside Demo constructor\n";
      }
      ~Demo(){
        cout<<"Inside Demo destructor\n";
      }
      void Fun(){
        cout<<"inside fun demo\n";
      }
};

class Hello : public Marvellous{
    public:
      int B;
      Hello(){
        B=20;
        cout<<"Inside Hello constructor\n";
      }
      ~Hello(){
        cout<<"Inside Hello destructor\n";
      }
      void Gun(){
        cout<<"inside gun hello\n";
      }
};

int main(){
    
    Demo dobj;
    Hello hobj;




    return 0;
}