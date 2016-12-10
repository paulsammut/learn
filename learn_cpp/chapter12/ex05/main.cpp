// Chapter 12.3 Virtual destructors, virtual assignment, and overriding virtualization.
#include <iostream>
#include <array>
#include <string>
#include <vector>


class Base
{
public:
    virtual ~Base()
    {
        std::cout << "Calling ~Base()" << std::endl;
    }
};

class Derived: public Base
{
private:
    int* m_array;

public:
    Derived(int length)
    {
        m_array = new int[length];
    }

    ~Derived() 
    {
        std::cout << "Calling ~Derived()" << std::endl;
        delete[] m_array;
    }
};

class Derived2: public Base
{
    ~Derived2()
    {
        std::cout << "Calling ~Derived2()" << std::endl;
    }
};


int main()
{
    Derived *derived = new Derived(5);
    Base *base = derived ;
    Base *base2 = new Derived2();
   
    delete base;
    delete base2;

    return 0;
}
