#include <iostream>
#include <algorithm>


namespace paulspace
{
    enum animals
    {
        CHICKEN,
        DOG,
        CAT,
        ELEPHANT,
        DUCK,
        SNAKE
    };
}

void checkIn()
{
    // if the user entered something invalid
    if (std::cin.fail())
    {
        std::cin.clear(); // reset any error flags
        std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer
    }
}

void printArray0(int array[], int length, int index)
{
    for(int i = 0; i < length ; i++)
    {
        std::cout << "Element " << i << " of array is " << array[i] << std::endl;
    }

    //if index is -1 we don't do this. 
    if( index >= 0)
    {
        for(int i = 0; i < length ; i++)
        {
            if(array[i] == index)
                std::cout << "Found index " << index << " in location " << i << std::endl;
        }
    }
}


void problem3()
{
    int scores[] = { 84, 92, 76, 81, 56 };
    const int numStudents = sizeof(scores) / sizeof(scores[0]);
 
    int maxScore = 0; // keep track of our largest score
    int maxIndex = 0; 
    for (int student = 0; student < numStudents; ++student)
        if (scores[student] > maxScore)
            maxIndex = student;
 
    std::cout << "The best score was " << maxScore << '\n';
    std::sort(scores, scores+numStudents);
    printArray0(scores, numStudents, -1);
}


void multiDimArray()
{
    const int rows{ 4 };
    const int cols{ 5 };
    int tooDee[rows][cols]=
    {
        {1,     2,      3,      4,      5   },
        {21,    22,     23,     24,     25  },
        {31,    32,     33,     34,     35  },
        {41,    42,     43,     44,     45  },
    };
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            std::cout << i << "th row " << j << "th col is " << tooDee[i][j] << std::endl;
            
}


int main()
{
    //quiz1
    double highTemp[365] = {0.0};


    int numLegs[6] = { 2, 4, 4, 4, 2, 0 };

    const int arrayLength(9);
    int array[arrayLength] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };


    
    int input;
    do
    {
        checkIn(); // this clears cin if there was any bad entry from the previous input
        std::cout << "Please enter a number from 1 to 9: ";
        std::cin >> input;
    }
    while((input < 1) || (input > 9));

    //if we reached here, that means we have legal input. 
    printArray0(array, sizeof(array)/sizeof(array[0]),input);

    std::cout << "The sorted stuff is: " << std::endl;
    problem3();

    multiDimArray();
    return 0;
}
    
