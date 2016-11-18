#include <iostream>
#include <vector>

class Accumulator
{
private:
    int m_value;
public:
    Accumulator() { m_value = 0; }

    void add(int value) {
        m_value += value;
    }

    // Make the reset() function a friend of this class
    friend void reset(Accumulator &accumulator);
};

//reset() is now a friend of the Accumulator class
void reset(Accumulator &accumulator)
{
    //And can access the private data of Accumulator objects
    accumulator.m_value = 0;
}

int main()
{
    Accumulator acc;
    acc.add(5);
    //   add 5 to the accumulator
    reset(acc);
    //  reset the accumulator to 0

    return 0;
}
