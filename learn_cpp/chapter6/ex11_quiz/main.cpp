//QUIZ 6.9a. Going to do this SUPER quick. 
//
//1: Ask the user how many names you want to enter. 
//2: Ask the user to enter each name
//3. Sort this new array using selection sort or whatever
//4. Print the sorted name list.


#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main()
{
    int length; 

    std::cout << "Hello! Please enter the number of names you will be inputting: ";
    std::cin >> length;
    std::cout << std::endl;

    string *nameArray = new string[length];

    std::cin.ignore(32767, '\n');
    //Now we ask for the names. 

    for(int i = 0; i < length; i++)
    {
        std::cout << "Please enter name " << i+1 << ": ";
        getline(cin, nameArray[i]);
    }

    //Now we sort:
    
    sort(nameArray, nameArray+length);

    for(int i = 0; i < length; i++)
        std::cout << "Name #" << i+1 << " is: " << nameArray[i] << std::endl;
    std::cout << std::endl;



    const int value{5};
    const int *ptr = &value;
    *ptr = 6; 


    delete[] nameArray;
    nameArray = nullptr;
    return 0;
}
