// Chapter 12
// Ex00 Pointers and references to the base class of derived objects
#include <iostream>
#include <array>
#include <string>
#include <vector>

class Base
{
protected:
    int m_value;
public:
    Base(int value) : m_value(value) {}

    const char* getName() {
        return "Base";
    }
    int getValue() {
        return m_value;
    }
};

class Derived : public Base
{
public:
    Derived(int value) : Base(value) {}

    const char* getName() {
        return "Derived";
    }
    int getValueDoubled() {
        return m_value*2;
    }
};


int main()
{
    Derived derived(5);
    std::cout << "derived is a " << derived.getName() << " and has value " << derived.getValue() << std::endl;

    Derived &rDerived = derived;
    std::cout << "rDerived is a " << rDerived.getName() << " and has value " << rDerived.getValue() << std::endl;

    Derived *pDerived = &derived;
    std::cout << "pDerived is a " << pDerived->getName() << " and has value " << pDerived->getValue() << std::endl;

    Base &rBase = derived;
    Base *pBase = &derived;

    std::cout << "rBase.getName - " << rBase.getName() << std::endl;
    // This doesn't work because the base pointer can't see the child functions. 
    std::cout << "rBase.getValueDoubled - " << rBase.getValueDoubled() << std::endl;
       
    return 0;
}
