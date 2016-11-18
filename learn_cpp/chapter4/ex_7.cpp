#include <iostream>

// strongy typed enum classes. Cool!
int main()
{
    enum class Color
    {
        RED,
        BLUE
    };
 
    Color color = Color::BLUE;
 
    //std::cout << color; // won't work, because there's no implicit conversion to int
    std::cout << static_cast<int>(color) << std::endl; // will print 1
 
    return 0;
}
