#include <iostream>

void doSomething(const int &var)
{
    std::cout << "Var used to be: " << var << std::endl;
    //std::cout << "Var is now: " << ++var << std::endl;
}

void doSomethingPtr(const int *ptr)
{
    std::cout << *ptr << " " << std::endl;
    ++*ptr;
}

void printIt(const int &ref)
{
    std::cout << ref;
}

int main()
{
    // ==============================================================================
    // ============== Dealing with Reference Variables! =============================

    int val1 = 5; // normal int
    int &ref = val1; // our first reference variable!

    std::cout << "Here is int: " << val1 << " and our ref: " << ref << std::endl;

    ref = 12; // chaging. This changes both the reference and the val1. 

    std::cout << "Now we do a ref assign to a new val. " << std::endl;
    std::cout << "Here is int: " << val1 << " and our ref: " << ref << std::endl;


    // Lets print out the addresses. 
    

    std::cout << "Address of val1: " << &val1 << " and ref: " << &ref << std::endl;

    int val2; 
    ref = val2; // this does not change the reference! It assigns the value of val2 to ref. 
    
    // ==============================================================================
    // ============== Const and References ===========================================

    // This can't be done because a non const ref would be voilting the const ints const-ness
    // 
    // const int val;
    // int &ref = val;
    
    // This can be done because a const int ref will not be voilating anything on the int. 
    int val3{4};
    const int &ref3 = val3; 
    
    // This can also be done. 
    const int val4{29};
    const int &ref4 = val4;

    //==============================================================================
    //============== OK. Now lets deal with some functions =========================
    //==============================================================================

    int val5{0x48};
    doSomething(val5); 
    doSomethingPtr(&val5);
    std::cout << "Val5 is now: " << val5 << std::endl;
    
    //==============================================================================
    //============== Const int routine =============================================
    //==============================================================================

    std::cout << std::endl;
    int a = 1;
    printIt(a);

    const int b = 2;
    printIt(b);

    printIt(3);
    std::cout << std::endl;

    return 0;

}
