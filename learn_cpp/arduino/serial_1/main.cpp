
#include <iostream>
#include <array>
#include <string>
#include <vector>

struct memTest
{
    int x; 
    int y; 
    int z; 
};

int main()
{
    std::cout << "Size of int: " << sizeof(int) << std::endl;

    memTest mt;

    mt.x = 1;
    mt.y = 2;
    mt.z = 3;
    
    std::cout << mt.y;

    return 0;
}
