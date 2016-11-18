#include <iostream>

int arrayFunc(int arrayIn[])
{
    arrayIn[6] = 0;
    return 0;
}

int main()
{
    int dicks[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};

    std::cout << "Dicks is " << dicks[6] << std::endl;
    arrayFunc(dicks);
    std::cout << "Dicks is " << dicks[6] << std::endl;

    return 0;
}
