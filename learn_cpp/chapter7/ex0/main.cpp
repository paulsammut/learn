#include <iostream>
#include <array>
#include <string>
#include <vector>

void foo(int* ptr)
{
    *ptr = 6;
}
void print(unsigned int val)
{
    std::cout << val << std::endl;
}

void print(float val)
{
    std::cout << val << std::endl;
}

void printArray(int* array, int ARRAY_SIZE)
{
    std::cout << "Array is :" << std::endl;

    int columns = 10;

    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << array[i] << "\t";
        if((i+1) % 10 == 0)
            std::cout << std::endl;
    }
    std::cout << std::endl;
}

int* allocateArray(int size)
{
    return new int[size];
}

int& retRefIndex(int* array, int index)
{
    return array[index];
}

int main()
{
        int val = 3;

    std::cout << "Val = " << val; 
    foo(&val);
    std::cout << " and after calling foo(), val = " << val << std::endl;

    int ARRAY_SIZE = 300;
    int* dArray = allocateArray(ARRAY_SIZE);

    for(int i = 0; i < ARRAY_SIZE; i++)
        dArray[i] =i+1;

    retRefIndex(dArray,10) = 44;

    printArray(dArray, ARRAY_SIZE);

    print(static_cast<unsigned int>(88));
    print(static_cast<float>(3.42253));

    delete[] dArray;

    
    return 0;
}
