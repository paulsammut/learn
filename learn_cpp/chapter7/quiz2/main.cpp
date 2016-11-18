#include <iostream>
#include <array>
#include <string>
#include <vector>

int binarySearch(int *array, int target, int min, int max)
{
    int middle; 
    bool found = false;
    while(!found)
    {
        middle = min+(max-min)/2;
        if(target == array[middle])
            return middle;
        else if(target > array[middle])
            min = middle;
        else
            max = middle;

        if(max==min || max == (min+1))
            return -1;
    }
    return -1;
}

int main()
{
    int array[] = { 3, 6, 8, 12, 14, 17, 20, 21, 26, 32, 37, 42, 44,48};


    // We're going to test a bunch of values to see if they produce the expected results.
    
    const int numTestValues = 9;

    // Here are the test values
    int testValues[numTestValues] = { 0, 3, 12, 13, 22, 26, 43, 44, 49};
    
    // Here are the expected values
    int expectedValues[numTestValues] = {-1, 0, 3, -1, -1, 8, -1, 13, -1};
    // Loop through all the test values
    for(int count = 0; count < numTestValues; count++)
    {
        // See if our value is in the array
        int index = binarySearch(array, testValues[count], 0, 14);

        // If it matches out expected value, the great!
        if(index == expectedValues[count])
            std::cout << "test value " << testValues[count] << " passed!"<< std::endl;
        else
            std::cout << "test value " << testValues[count] << " failed." << std::endl;
    }

    return 0;
}

