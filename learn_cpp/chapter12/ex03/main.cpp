// Chapter 12 Virtual functions and polymorphism
// My first ever polymorphed function!!!! 
#include <iostream>
#include <array>
#include <string>
#include <vector>

class A
{
public:
    virtual const char* getName() { return "A"; }
};
 
class B: public A
{
public:
    virtual const char* getName() { return "B"; }
};
 
class C: public B
{
public:
    virtual const char* getName() { return "C"; }
};
 
class D: public C
{
public:
    virtual const char* getName() { return "D"; }
};
 
int main()
{
    D c;
    A &rBase = c;
    std::cout << "rBase is a " << rBase.getName() << '\n';
 
    return 0;
}
