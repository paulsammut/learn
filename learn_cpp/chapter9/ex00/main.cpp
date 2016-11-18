// Chapter 9 lesson!
#include <iostream>
#include <cmath>


class Cents
{
private:
    double m_tits;
    int m_cents;

public:
    Cents(double tits, int cents) : m_tits(tits), m_cents(cents) {}

    //add Cents + Cents using a friend funtion
    friend int operator+(const Cents &c1, const Cents &c2);

    friend int operator+(const Cents &c1, const int c2);

    int getCents() const {
        return m_cents;
    }
};

int operator+(const Cents &c1, const Cents &c2)
{
    // use the Cents constructor and operator+(int,int)
    // we can access m_cents directly because this is a friend function
    return int(c1.m_cents + c2.m_cents);
}    

int operator+(const Cents &c1,const int c2)
{
    // use the Cents constructor and operator+(int,int)
    // we can access m_cents directly because this is a friend function
    return int(c1.m_cents + c2);
}    

int main(int argc, char **argv)
{
    Cents cents1(69, 10);
    Cents cents2(12, 20);
    int centsSum = cents1 + cents2;
    int centsSum2 = cents1 + 10; //c++ is so smart that it knows to convert cents to an int

    std::cout << "I have " << centsSum << " cents." << std::endl;
    std::cout << "I have " << centsSum2 << " cents." << std::endl;

    return 0;
}
