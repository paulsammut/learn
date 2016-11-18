//Quiz for chapter 8!
#include <iostream>
#include <cmath>

class Point2d
{
private:
    double m_x, m_y;
public:
    Point2d(double x=0,double y=0) : m_x(x), m_y(y) {}
    void print()
    {
        std::cout << "Point x: " << m_x << " y: " << m_y << std::endl;
    }

    friend double distanceFrom(Point2d&, Point2d&);
};

double distanceFrom(Point2d& p1, Point2d& p2)
{
    return sqrt((p1.m_x - p2.m_x)*(p1.m_x - p2.m_x) + (p1.m_y-p2.m_y)*(p1.m_y-p2.m_y));
}

int main()
{
    Point2d first;
    Point2d second(10.0, 10.0);
    first.print();
    second.print();

    std::cout << "Distance between points: " << distanceFrom(first, second) << std::endl;

    return 0;
}
