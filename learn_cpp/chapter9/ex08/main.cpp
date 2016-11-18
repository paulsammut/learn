// Chapter 9 lesson!
// 9.7 Overloading the increment and decrement operators
#include <iostream>
#include <cmath>
#include <string>
#include <cassert>

class IntList
{
    private:
        int m_list[10];
        
    public:
        int& operator[](const int index);       // non const implementation
        const int& operator[](const int index) const;   //const implementation
};

int& IntList::operator[](const int index)
{
    assert(index >= 0 && index < 10 && "Hellllo???" );
    return m_list[index];
}

const int& IntList::operator[](const int index) const
{
    return m_list[index];
}

int main()
{

    IntList list;
    
    list[3331] = 2;

    std::cout << list[3] << std::endl;
    
    return 0;
}
