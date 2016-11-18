#include <iostream>

//Size of pointer exercize


int main()
{
    struct Something
    {
        int x;
        int y;
        int z;
    };

    int *iPtr;
    char *cPtr;

    Something *somethingPtr;


    std::cout << "Size of : " << sizeof(iPtr) << std::endl;
    std::cout << "Size of : " << sizeof(cPtr) << std::endl;
    std::cout << "Size of : " << sizeof(somethingPtr) << std::endl;
        
    return 0;
}
