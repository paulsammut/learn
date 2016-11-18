// Chapter 9 lesson!
// 9.5 Overloading unary operators +, -, and !  
#include <iostream>
#include <cmath>

class Point
{
private:
    double m_x, m_y, m_z; 
public:
    Point(double x=0.0,double y=0.0,double z=0.0) :
        m_x(x), m_y(y), m_z(z) { }

    // Convert a point to its negative equivalent
    Point operator- () const; 
    //Return true if the point is set at the origin
    bool operator! () const; 
    double getX() { return m_x; }
    double getY() { return m_y; }
    double getZ() { return m_z; }
};

// Member function overloading the unary - operator.
Point Point::operator-() const
{
    return Point(-m_x, -m_y, -m_z); 
}


// Member function overloading the unary - operator.
bool Point::operator!() const
{
    return !(m_x || m_y || m_z);
}

int main()
{
    Point point(1,2,3); // use default constructor to set to (0.0, 0.0, 0.0)
 
    if (!point)
        std::cout << "point is set at the origin.\n";
    else
        std::cout << "point is not set at the origin.\n";
    return 0;
}
