// Chapter 12 Virtual functions and polymorphism
// My first ever polymorphed function!!!! 
#include <iostream>
#include <array>
#include <string>
#include <vector>

class Base
{
    public:
        virtual const char* getName() { return "Base"; }
};

class Derived : public Base
{
    public:
        virtual const char* getName() { return "Derived"; }
};

int main()
{
    Derived derived;
    Base &rBase = derived;

    std::cout << "rBase is a " << rBase.getName() << std::endl;

    return 0;
}

