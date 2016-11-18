// Chapter 9 lesson!
// 9.2a Overloading operators using normal functions

#include <iostream>
#include <cmath>


class Cents
{
private:
    int m_cents;

public:
    Cents(int cents) : m_cents(cents) {}

    int getCents() const {
        return m_cents;
    }
};

Cents operator+(const Cents &c1, const Cents &c2)
{
    // use the cents contructor and operator+(int int)
    // we don't need direct access to private members here.
    return Cents(c1.getCents() + c2.getCents());
}


int main()
{
    Cents cents1(6), cents2(8);
    Cents centsSum = cents1 + cents2;

    std::cout << "Using normal function oprerator overload:" << std::endl;
    std::cout << "I have " << centsSum.getCents()<< " cents." << std::endl;
    return 0;

}
