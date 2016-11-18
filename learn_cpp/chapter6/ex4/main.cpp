#include <iostream>

int main()
{
    int x{ 5 };

    std::cout << x << '\n'; // print the value of variable x
    std::cout << &x << '\n'; // print the memory address of variable x
    std::cout << *&x << '\n'; /// print the value at the memory address of variable x


    int *iPtr0;      //a pointer to an integer
    double *iPtr1;   //a pointer to a double
    int* iPtr2; // also works and i've seen this a lot
    int * iPtr3; //also works but sucks
    int *iPtr4, *iPtr5; // declare two at once!

    std::cout << "iPtr0 " << iPtr0 << std::endl;
    std::cout << "iPtr1 " << iPtr1 << std::endl;
    std::cout << "iPtr2 " << iPtr2 << std::endl;
    std::cout << "iPtr3 " << iPtr3 << std::endl;
    std::cout << "iPtr4 " << iPtr4 << std::endl;
    
    iPtr0 = &x;

    std::cout << "iPtr0 points to the address: " << iPtr0 << 
        " with value of " << *iPtr0 << std::endl; 

    std::cout << "iPtr0 has an address of: " << &iPtr0 << 
        " with value of " << **&iPtr0 << std::endl; 

    *iPtr0 = 69;

    std::cout << "The new value of iPtr0, after we assigned its value is: " << *iPtr0 << std::endl;
    std::cout << "The value of our original var x is " << x << std::endl;
    
    return 0;
}
