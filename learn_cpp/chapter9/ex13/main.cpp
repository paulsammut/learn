// Chapter 9 lesson!
// 9.10 Overloading typecasts
#include <iostream>
#include <string>
#include <cassert>

class Cents
{
    private:
        int m_cents;

    public:
        Cents(int cents=0) : m_cents(cents) {}

        int getCents() { return m_cents; }
        void setCents(int cents) { m_cents = cents; }
        
        // Overloaded int cas
        operator int() { return m_cents; }
};

void printInt(int val)
{
    std::cout << val << std::endl;
}

int main()
{
    Cents cents(7);
    printInt(cents.getCents()); //prints 7;
    printInt(cents); //prints 7 by implictly calling the overloaded typecast
    return 0;
}
