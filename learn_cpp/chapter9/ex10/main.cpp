// Chapter 9 lesson!
// 9.9 Overloading the parenthesis operator
#include <iostream>
#include <cmath>
#include <string>
#include <cassert>
#include <vector>

// A class of 4 x 4 two dimensional array of doubles.
class Matrix
{
private:
    double data[4][4];
public:
    Matrix()
    {
        //Set all elements of the matrix to 0.0
        for (int row = 0; row < 4; ++row)
            for( int col=0; col < 4; ++col)
                data[row][col] = 0;
    }

    double& operator()(int row, int col);
    const double& operator()(int row, int col) const;     //for const obj
    void operator()();
};

// We want to create an operator using parens that takes in two int parameters
// that indexes this two dimensional 4x4 array.
double& Matrix::operator()(int row, int col)
{
    assert(col >= 0 && col < 4);
    assert(row >= 0 && row < 4);
    return data[row][col];
}

const double& Matrix::operator()(int row, int col) const
{
    assert(col >= 0 && col < 4);
    assert(row >= 0 && row < 4);
    return data[row][col];
}

void Matrix::operator()()
{
    //reset all elements of the array to 0.0
    for (int row = 0; row < 4; ++row)
        for( int col=0; col < 4; ++col)
            data[row][col] = 0;
}

int main()
{
    Matrix matrix;
    matrix(1,2) = 4.5;
    std::cout << matrix(1,2) << std::endl;
    matrix(); // erase Matrix
    std::cout << matrix(1,2) << std::endl;
    return 0;
}
