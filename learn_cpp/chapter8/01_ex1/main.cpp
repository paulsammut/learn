#include <iostream>

class A
{
    public:
        A() { std::cout << "A\n";}
};

class B
{
    private:
        int m_x;
        double m_y;
        float m_z;
    public:
        B() : m_x{1}, m_y{2}, m_z{3} //directly initialize using member initializer list 
        {
        }

        void print()
        {
            std::cout << m_x << " " << m_y << " " << m_z << std::endl;
        }
};

int main()
{
    B b;
    b.print();
    return 0;
}

