// 11.6 Adding, changing and hiding members in a derived class

#include <iostream>
#include <array>
#include <string>
#include <vector>

class Base
{
private:
protected:
    void print()
    {
        std::cout << "Base protected function." << std::endl;
    }
    int m_value;
public:
    Base(int value) : m_value(value)
    {
    }

    void identify()
    {
        std::cout << "I am a Base!" << std::endl;
    }

    friend std::ostream& operator<<(std::ostream &out, const Base &b)
    {
        out << "In Base:" << std::endl;
        out << b.m_value << std::endl;
        return out;
    }
};

class Derived : public Base
{
public:
    Derived(int value) : Base(value)
    {
    }

    int getValue() {
        return m_value;
    }
    void setValue(int value) {
        m_value = value;
    }

    void identify()
    {
        std::cout << "I am a Child!" << std::endl;
    }

    void print() // redifined function as public
    {
        Base::print();
        std::cout << "Derived public function." << std::endl;
    }
    
    friend std::ostream& operator<<(std::ostream &out, const Derived &d)
    {
        out << "In Derived:" << std::endl;
        out << static_cast<Base>(d);
        return out;
    }

};

int main()
{
    Base base(4);
    base.identify();
    Derived der(2);
    der.identify();
    der.print();
    std::cout << der;
    return 0;
}
