#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

int main()
{
    std::string penD;

    std::cout << "Hello. Please describe your penis: \n";

    std::getline(std::cin, penD);

    penD.at(0) =  tolower(penD.at(0));
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Your penis has the following description:\nIt is " << penD << std::endl;

    return 0;
}
