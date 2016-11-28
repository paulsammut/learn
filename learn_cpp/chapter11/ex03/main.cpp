#include <iostream>
#include <array>
#include <string>
#include <vector>

class Base
{
private:
    int m_id;

public:
    Base(int id = 0) : m_id(id)
    {
    }

    int getId() const { return m_id; }
}; 

class Derived : public Base
{
public:
    double m_cost;

    Derived(double cost, int id) : Base(id), m_cost(cost) {}

    double getCost() const { return m_cost; }
};
        
int main()
{
    Base base(5);
	Derived derived(1.3, 5); // use Derived(double, int) constructor
    std::cout << "Id: " << derived.getId() << '\n';
    std::cout << "Cost: " << derived.getCost() << '\n';
    return 0;
}
