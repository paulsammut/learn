#include <iostream>

void handlePtr(int *ptr)
{
    if(ptr)
    {
        std::cout << "It actually is something!" << std::endl;
        std::cout << "--- This is what it is: " << ptr
            << " with value: " << *ptr << std::endl;
    }
    else
        std::cout << "It's just garbage!" << std::endl;
}


int main()
{
    int *unInitPtr0; //unintialized pointer
    std::cout << "Uninitialized pointer address: " << unInitPtr0 << std::endl; 
    // making a null pointer
    int *nullPtr0(0); //one way of doing it.

    int *nullPtr1; //uninitialized
    nullPtr1 = 0;

    int val = 24;

    nullPtr0 = &val;
    
    handlePtr(nullPtr0);


    //std::cout << "nullPtr0: " << *nullPtr0 << std::endl;
    //std::cout << "nullPtr1: " << *nullPtr1 << std::endl;

    return 0;
}

