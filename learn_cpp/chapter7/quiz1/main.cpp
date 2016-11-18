#include <cassert>
#include <iostream>
#include <array>
#include <string>
#include <vector>

using namespace std;

int* getLargestElement(int* array, int array_size)
{
    int biggest = 0;
    for(int i = 0; i < array_size ; i++)
        if(array[biggest] < array[i])
            biggest = i;

    return &array[biggest];
}

int main()
{
    int* array = new int[5]{ 10, 2, 23, 4, 5};

    int *ptr = getLargestElement(array, 5);

    std::cout << "Largest element is: " << *ptr << std::endl;

    *ptr = 99;

    std::cout << "The element is now: " << *ptr << " " << array[2] << std::endl;

    return 0;
}

/*
double max(const double var1, const double var2);

void swap(int &var1, int &var2);
*/
