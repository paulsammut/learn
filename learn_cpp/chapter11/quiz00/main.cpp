// Chapter 11 Quiz
// Question 2B
#include <iostream>
#include <array>
#include <string>
#include <vector>

class Fruit
{
private:
    std::string m_name;
    std::string m_color;
public:
    Fruit(std::string name, std::string color) : m_name(name), m_color(color) {}
    std::string getName() {
        return m_name;
    }
    std::string getColor() {
        return m_color;
    }
};

class Apple : public Fruit
{
public:
    Apple(std::string color) : Fruit("Apple", color) {}
};

class Banana : public Fruit
{
public:
    Banana() : Fruit("Banana", "color") {}
};

int main()
{
    Apple a("red");
    Banana b;

    std::cout << "My " << a.getName() << " is " << a.getColor() << std::endl;
    std::cout << "My " << b.getName() << " is " << b.getColor() << std::endl;

    return 0;
}
