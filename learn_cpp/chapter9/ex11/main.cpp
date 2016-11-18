// Chapter 9 lesson!
// 9.9b Functor exercise
#include <iostream>
#include <string>
#include <cassert>

class Accumulator
{
private:
    int m_counter =0;

public:
    Accumulator()
    {
    }
    int operator() (int i) {
        return (m_counter += i);
    }
};

int main()
{
    Accumulator acc;
    std::cout << acc(10) << std::endl;
    std::cout << acc(20) << std::endl;
    return 0;
}
