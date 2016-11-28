#include <iostream>
#include <array>
#include <string>
#include <vector>

using namespace std;
class Fruit
{
    private:
        string m_name;
        string m_color;
    public:
        Fruit(string name, string color) : m_name(name), m_color(color) {}
        string getName() const { return m_name; }
        string getColor() const { return m_color; }
}; 

class Apple : public Fruit
{
    private:
        double m_fiber;
    public:
        Apple(string name, string color, double fiber) : Fruit(name, color), m_fiber(fiber) {}
        
        friend ostream& operator<<(ostream &out, const Apple &a)
        {
            out << "Apple(" << a.getName() << ", " << a.getColor() << ", " << a.m_fiber << ")" << std::endl;
        }
};

class Banana : public Fruit
{
    public:
        Banana(string name, string color) : Fruit(name, color) {}
    friend ostream& operator <<(ostream &out, const Banana &b)
    {
        out << "Banana(" << b.getName() << ", " << b.getColor() <<")" << std::endl;
    }
};

int main()
{
	const Apple a("Red delicious", "red", 4.2);
	std::cout << a;
 
	const Banana b("Cavendish", "yellow");
	std::cout << b;
 
	return 0;
}
