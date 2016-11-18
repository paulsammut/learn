// Chapter 9 lesson!
// 9.9 Quiz!
#include <iostream>
#include <string>
#include <cassert>

class Mystring
{
private:
    std::string m_string;

public:
    Mystring(std::string string) : m_string(string) {}

    std::string operator()(int index, int chars);
};

std::string Mystring::operator()(int index, int chars)
{
    std::string temp = "";
    
    assert( index >= 0 && index < m_string.length());
    assert( chars < (m_string.length() - index));

    for( int i = 0; i < chars ; i++)
        temp += m_string[index + i];

    return temp;
} 


int main()
{
    Mystring string("Hello, world!");
    std::cout << string(7,5) << std::endl;
    return 0;
}
