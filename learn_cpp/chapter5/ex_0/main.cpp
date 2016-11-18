#include <iostream>

int main()
{
    int i{1};       //curent line
    while(i <= 5)
    {
        int j{1};   //current pos in line
        while(j <= 5 )
        {
            if(j <= 5-i)
                std::cout << ' ';
            else
                std::cout << 6-j;
            std::cout << ' '; 
            ++j;
        }
        std::cout << std::endl ;
        ++i;
    }
}
