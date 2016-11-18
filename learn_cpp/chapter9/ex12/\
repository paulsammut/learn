// Chapter 9 lesson!
// 9.4 Overloading operators using member functions 

#include <iostream>
#include <cmath>

class Cents
{
    private: 
        int m_cents;

    public: 
        Cents(int cents) : m_cents(cents) {}

        // Overload Cents + int
        Cents operator+(int val);
        
        // Overload Cents + Cents
        Cents operator+(Cents cents2);
        
        int getCents() { return m_cents; }
};

// note: this function is a member function!
// the cents parameter in the friend version is now the implicit *this parameter
Cents Cents::operator+(int val)
{
    return Cents(m_cents + val);
}

// note: this function is a member function!
// the cents parameter in the friend version is now the implicit *this parameter
Cents Cents::operator+(Cents cents2)
{
    return Cents(m_cents + cents2.getCents());
}

int main()
{

    Cents c1(10), c2(20);
    Cents res = c1 + c2;
    std::cout << "Cents is: " << res.getCents() << std::endl;
    return 0;
}
