// Chapter 9 lesson!
// 9.6 Overloading comparison operators
#include <iostream>
#include <cmath>
#include <string>

class Car
{
private:
    std::string m_make;
    std::string m_model;
public:
    Car(std::string make, std::string model):m_make(make), m_model(model) {}

    friend bool operator==(const Car &c1, const Car &c2);
    friend bool operator!=(const Car &c1, const Car &c2);
};

bool operator==(const Car &c1, const Car &c2)
{
    return (c1.m_make == c2.m_make && c1.m_model == c2.m_model);
}

bool operator!=(const Car &c1, const Car &c2)
{
    return !(c1 == c2);
}

int main()
{
    Car corolla ("Toyota", "Corolla");
    Car camry ("Toyota1", "Camry");

    if (corolla == camry)
        std::cout << "a Corolla and Camry are the same.\n";

    if (corolla != camry )
        std::cout << "a Corolla and Camry are not the same.\n";

    if (corolla == corolla)
        std::cout << "a Corolla and Corolla are the same.\n";

    return 0;
}
