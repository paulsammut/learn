#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <functional>

typedef int(*someFunction)(int,int);
using typeAliasFunc = int(*)(int,int);

int doSomething(int i = 12, int j = 12)
{
    std::cout << i+j << std::endl;
    return i+j;
}
//The following are the 4 different ways to decalre a function as a paramter. 
//
//First is the regular way, which can be seen as ugly. 
//void takeInF(int i, int j, int (*funcPtr)(int,int))
//
//Second is using a typedef, which is declared above. This establishes the function signature
//void takeInF(int i, int j, someFunction funcPtr)
//
//Third is the following which uses a type alias, also declared above.
//void takeInF(int i, int j, typeAliasFunc funcPtr)
//
//fourth is by using the std::function library. 
void takeInF(int i, int j, std::function<int(int,int)> funcPtr)
{
    std::cout << funcPtr(i,j);
}


int main()
{
    doSomething();
    doSomething(1);
    doSomething(1,1);

    std::cout << "Function do something: " << reinterpret_cast<void*>(doSomething) << std::endl;

    int (*fPtr)(int u, int x) = doSomething;
    (*fPtr)(2,4);
    fPtr(7,8);
    //fPtr(); //shouldn't work

    std::cout << "The takeInF function responds to (2,3) with: ";
    takeInF(2,3, doSomething);
    return 0;
}

