// Chapter 9 lesson!
// 9.11 The copy constructor
#include <iostream>
#include <string>
#include <cassert>


class Fraction
{
private:
    int m_numerator;
    int m_denominator;

    //copy constructor
    Fraction(const Fraction &fraction) :
        m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
        //note that we can access parameter fraction directly as we're inside the fraction class
    {
        //no need to check anything since we are dealing with a fraction already

        std::cout << "Copy constructor called!" << std::endl;
    }

public:
    //Default constructor
    Fraction(int numerator, int denominator) : m_numerator(numerator),
        m_denominator(denominator)
    {
        assert(denominator != 0);
    }

    friend std::ostream& operator<<(std::ostream& out, const Fraction &f1);
};

std::ostream& operator<<(std::ostream& out, const Fraction &f1)
{
    out << f1.m_numerator << "/" << f1.m_denominator;
    return out;
}


int main()
{
    Fraction f1(5,3); //directly initialize the fraction.
    //Fraction f2(f1); //calls our copy constructor!

    //std::cout << f2 << std::endl;
    return 0;
}
