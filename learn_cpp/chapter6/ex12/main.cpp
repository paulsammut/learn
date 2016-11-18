#include <iostream>

int main()
{
    //const int value{5};
    //const int *ptr = &value;
    // *ptr = 6; 

    //==============================================================================
    //============== Pointer to a constant value ===================================
    //==============================================================================

    //A constant pointer can point to a non-constant variable. 

    int value{5};
    const int *ptr = &value;

    //meaning we can now change the value of that the pointer points to
    //but not the address. 
    
    value = 9;

    std::cout << "Good morning paul! It's pretty out. " << std::endl;
    std::cout << "*ptr =" << *ptr << std::endl;

    //I can do this because address that the pointer holds is not constant.
    //The pointer's value is constant. 
    ptr = new int {2};

    delete ptr;     //deallocate the memory
    ptr = nullptr;  //make the pointer point to null so it doesn't point to garbage

    //==============================================================================
    //============== Const pointer =================================================
    //============================================================================== 

    //A pointer can be decalared as a constant pointer. This means that its address
    //(which is its value) cannot be changed. The value at that address however, 
    //can be changed. 
    
    int *const constPtr = new int{3};
    std::cout << "Our constPtr has a dereferenced value of: " << *constPtr << std::endl;
    std::cout << "And an address of: " << &constPtr << std::endl;
    
    delete constPtr;
    //constPtr = nullptr;  I can't do this! This is interesting!!
    
    //==============================================================================
    //============== Const pointer to a const value ================================
    //==============================================================================

    //A const pointer to a const value means that I cannot change the pointer's
    //address, and I cannot use the dereferencing operator. 
    
    int val2 = 12;
    const int *const constPtrConstVal = &val2;
    std::cout << "Our const int *const ptr has value: " << *constPtrConstVal << std::endl;
    std::cout << "And an address of: " << &constPtrConstVal << std::endl;

    //can't do the following:
    //  constPtrConstVal = new int(25);
    //  *constPtrConstVal = 25;

    return 0;
}
