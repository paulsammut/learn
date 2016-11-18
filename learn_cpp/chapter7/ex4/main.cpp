#include <iostream>

void foo()
{
    foo();
}

int main()
{
    std::cout << "STACK OVERFLOW!" << std::endl;
    //int stack[100000000];
    foo();
    return 0;
}
