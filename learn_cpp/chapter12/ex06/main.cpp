// Chapter 12.4 Early binding and late binding!
#include <iostream>
#include <array>
#include <string>
#include <vector>

int add(int x, int y)
{
    return x+y;
}

int main()
{
    // Create a function pointer and make it point to the Add function
    // This is known as an indirect function call.    
    int (*pFcn)(int, int) = add;
    std::cout << pFcn(5,3) << std::endl;

    return 0;
}
