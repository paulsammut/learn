// 11.5 Inheritance and access specifiers

#include <iostream>
#include <array>
#include <string>
#include <vector>

class Base
{
private:
    int m_private; // can only be accessed by Base members and friends (not derived classes)
public:
    int m_public; // can be accessed by anybody
protected:
    int m_protected; // can be accessed by Base members, friends, and derived classes
};

class Derived : public Base
{
public:
    Derived()
    {
        m_public = 1;
        // m_private = 2; // not allowed: can not access private base members from derived class
        m_protected = 3; // allowed: can access protected base members from derived class
    }
};

// ---- Access specifier demo for inheritance

class Pub : public Base
{
public:
    Pub()
    {
        m_public = 3;
        m_protected = 4;
    }
};

class Pri : private Base
{
public:
    Pri()
    {
        m_public = 3;
        m_protected = 4;
    }
};

class Pro : protected Base
{
public:
    Pro()
    {
        m_public = 3;
        m_protected = 4;
    }
};

class Def : Base  // Defaults to private inheritance
{
};

int main()
{
    std::cout << "Beep boop!" << std::endl;
    Base base;
    base.m_public = 1; // allowed, can access public members from outside class
    // base.m_private = 2; // not allowed: cannot access private members from outside class
    // base.m_protected = 3; // not allowed: can not access protected members from outside class

    Pub pub;
    pub.m_public = 12;
    //pub.m_protected = 34; // no cool

    Pri pri;
    // pri.m_public = 13; // not cool because inherited members have been changed to private

    Pro pro;
    // pro.m_public = 12; // not cool because inherited members have been changed to private

    return 0;
}
