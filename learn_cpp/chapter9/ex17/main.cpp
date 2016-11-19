// Chapter 9 lesson!
// 9.13 - 2 - Converting constructors, explicit and delete
#include <string>
#include <iostream>

class MyString
{
private:
    std::string m_string;
public:
    MyString(double) = delete;
    explicit MyString(int x) //allocate size of string
    {
        m_string.resize(x);
    }

    MyString(char x)
    {
        m_string = std::string(1, x);
    }

    MyString(const char *string) // allocate string to hold string value
    {
        m_string = string;
    }

    friend std::ostream& operator<<(std::ostream& out, const MyString &s);
};

std::ostream& operator<<(std::ostream& out, const MyString &s)
{
    out << s.m_string;
    return out;
}

int main()
{
    MyString x= 'x'; // use copy initialization for MyString
    std::cout << x;
    //std::cout << "UMMM" << std::endl;
    MyString y = 189.0d;
    return 0;

}
