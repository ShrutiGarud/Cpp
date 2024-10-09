#include<iostream>


namespace Marvellous{
    class Demo{
        //logic
    };
}

namespace PPA{
    class Hello{
        //logic
    };
}

using namespace Marvellous;

int main(){
    std::cout<<"Inside main\n";
    Demo dobj;
    PPA:: Hello hobj;

    return 0;
}