// Chapter 9 lesson!
// 9.3 Overloading the I/O operators. 

#include <iostream>
#include <cmath>

class Point
{
    private:
        double m_x, m_y, m_z;

    public:
        Point(double x=0.0, double y=0.0, double z=0.0): m_x(x), m_y(y), m_z(z) {}

        friend std::ostream& operator<<(std::ostream &out, const Point &point)
        {
            // Since the operat<< is a friend, we have access to the point member vars
            out << "Point("<< point.m_x << ", " << point.m_y << ", "<< point.m_z << ")";
            return out;
        }

        friend std::istream& operator>>(std::istream &in, Point &point)
        {
            in >> point.m_x;
            in >> point.m_y;
            in >> point.m_z;

            return in;
        }
};

int main()
{

    Point point1(2.0, 3.0, 4.0);

    std::cout << "Please enter a point: ";
    std::cin >> point1;
    std::cout << std::endl;
    std::cout << point1 << std::endl;
    return 0;
}
