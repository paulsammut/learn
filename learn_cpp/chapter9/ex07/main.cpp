// Chapter 9 lesson!
// 9.7 Overloading the increment and decrement operators
#include <iostream>
#include <cmath>
#include <string>

class Digit
{
private:
    int m_digit;
public:
    Digit(int digit=0): m_digit(digit) {}
    Digit& operator++();    // Prefix ++x operator overload
    Digit& operator--();    // Prefix --x operator overload
    Digit operator++(int); // Postfix x++ operator overload
    Digit operator--(int); // Postfix x-- operator overload
    friend std::ostream& operator<< (std::ostream &out, const Digit &d);
};

Digit& Digit::operator++()
{
    //if our number is 9, wrap to 0;
    if(m_digit == 9)
        m_digit = 0;
    else
        ++m_digit;

    return *this;
}

Digit& Digit::operator--()
{
    //if our number is 0, wrap to 9;
    if(m_digit == 0)
        m_digit = 9;
    else
        --m_digit;

    return *this;
}

// Postfix operator overload
// In a postfix decrement/increment operation, the expression returns the operand then does the
// operation.
Digit Digit::operator++(int)
{
    Digit temp(m_digit);

    ++(*this);

    return temp;
}

Digit Digit::operator--(int)
{
    //if our number is 0, wrap to 9;
    if(m_digit == 0)
        m_digit = 9;
    else
        --m_digit;

    return *this;
}

std::ostream& operator<< (std::ostream &out, const Digit &d)
{
    out << d.m_digit;
    return out;
}

int main()
{
    Digit digit(8);

    std::cout << digit;
    std::cout << ++digit;
    std::cout << digit++;
    std::cout << digit;
    std::cout << --digit;
    std::cout << digit--;
    std::cout << digit;
    std::cout << std::endl;

    return 0;
}
