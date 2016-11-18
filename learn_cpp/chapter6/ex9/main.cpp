#include <iostream>


int main()
{
    int *ptr = new int[25000000];
    *ptr = 6969;
    std::cout << "after init, *ptr =" << *ptr << std::endl;
    std::cin.ignore();

    delete ptr;
    ptr = nullptr; 

    // The follow seg-faults:
    // std::cout << "after deletion, ptr has val: " << *ptr << std::endl;
    std::cin.ignore();

    int *newVar = new (std::nothrow) int {24};

    if(!newVar)
    {
        std::cout << "Couldn't allocate memory for newVar!" << std::endl;
        exit(1);
    }

    std::cout << "Or newVar is: " << *newVar << std::endl;

    int *newPtr = 0;

    if(!newPtr)
    {
        //This is a null poitner, so it hasn't been allocated yet!
        newPtr = new (std::nothrow) int[25000000000];
    }


    
    return 0;

}
