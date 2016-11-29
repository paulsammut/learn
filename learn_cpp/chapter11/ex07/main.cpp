#include <iostream>
#include <array>
#include <string>
#include <vector>

class Base
{
private:
    int m_value;
public:
    Base(int value) : m_value(value) {}

protected:
    void print() { std::cout << m_value << std::endl; }
};

class Derived : public Base
{
public:
    Derived(int value) : Base(value) {}
    
    using Base::print; //here we are redefining the access lever of an inherited base function
};

int main()
{
    Derived derived(24);
    derived.print();
    return 0;
}

