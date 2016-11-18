#include <iostream>

void printSizeOfArray(int array[])
{
    // This will always print 8, which means i have a 64 bit system. 
    std::cout << "The sizeof the array is: " << sizeof(array) << std::endl;
}

void printSizeOfPtr(int *array)
{
    // This will also print 8 because that is the size of a memory address
    std::cout << "The sizeof the pointer is: " << sizeof(array) << std::endl;
}


int main()
{
    int array[5] = { 99 , 98 , 97, 96, 95 };

    std::cout << "The value of array is: " << array << std::endl;

    std::cout << "The value of *array is: " << *array << std::endl;
    
    std::cout << "The value of &array is: " << &array << std::endl;

    std::cout << "The value of *(array+1) is: " << *(array+1) << std::endl;


    int *ptr = array;

    std::cout << "The sizeof the pointer is: " << sizeof(ptr) << std::endl;
    std::cout << "The sizeof the array is: " << sizeof(array) << std::endl;

    printSizeOfArray(array);
    printSizeOfPtr(array);
    


    //pointer arithmatic 

    const int arrayLength = 7;
    char name[arrayLength] = "Mollie";
    int numVowels(0);
    for (char *ptr = name; ptr < name + arrayLength; ++ptr)
    {
        switch (*ptr)
        {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                numVowels++;
        }
    }
     
    std::cout << name << " has " << numVowels << " vowels.\n";

    return 0;
}
