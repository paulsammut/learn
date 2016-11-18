#include <iostream>

int main()
{
    std::cout << "Enter a positive integer: ";
    int length; 
    std::cin >> length;

    int *array = new int[length]; //use array new. 

    std::cout << std::endl;
    std::cout << "Enter a number to stuff in the array: ";

    int num; 
    std::cin >> num;
    array[length] = num;

    std::cout << std::endl << "That number is: " << &array[length] << std::endl;

    std::cout << "The sizeof is: " << sizeof(array) << std::endl;

    delete[] array;  //release that memory!
    array = nullptr; //null it. k
    

    //different ways of initializing dynamically allocated arrays:
    int *d_array_1 = new int[10](); //sets everything to 0.

    for(int i = 0; i < 10; i++)
        std::cout << d_array_1[i] << "\t";
    std::cout << std::endl;
    delete[] d_array_1;
    d_array_1 = nullptr;

    int *d_array_2 = new int[5] { 1, 2, 3, 4, 5 };
    std::cout << "This should be 3: " << d_array_2[2] << std::endl;
    delete[] d_array_2; 
    d_array_2 = nullptr;

    return 0;
}

   
