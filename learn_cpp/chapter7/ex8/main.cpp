#include <cassert>
#include <iostream>
#include <array>
#include <string>
#include <vector>

int main()
{
    std::string hello = "Hello, world!";
    int index;

    do
    {
        std::cout << "Enter an index: ";
        std::cin >> index;
        
        ///handle case where user entered a non-integer
        if(std::cin.fail())
        {
            std::cerr << "Illegal input you buttstick!!" << std::endl;
            std::cin.clear(); //reset any error flags
            std::cin.ignore(32767, '\n'); //ignore any characters in the input buffer
            index = -1; //ensure index has an invalid value so the loop doesn't terminate
            continue; //this continue may seem extraneous, bit it explicitly signals an intent to terminate this loop iteration
        }

        assert(index >= 0 && index <= static_cast<int>(hello.size()));

    }while (index <0 || index >= static_cast<int>(hello.size())); //handle case where user entered an out of range integer

    std::cout << "Letter number " << index << " is " << hello[index] << std::endl;


    return 0;  
}
