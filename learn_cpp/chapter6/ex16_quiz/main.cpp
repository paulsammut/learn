#include <iostream>
#include <string>
#include <vector>

int main()
{
    // declare a fixed array:
    
    std::vector<std::string> names = { "Alex",
                                    "Betty",
                                    "Caroline",
                                    "Dave",
                                    "Emily",
                                    "Fred",
                                    "Greg",
                                    "Holly"};

    std::string input;

    std::cout << "Please enter your name: ";
    getline(std::cin, input);

    bool flag = false;
    for(const std::string element : names)
        if(element == input)
            flag = true;

    if(flag)
        std::cout << input << " was found!" << std::endl;
    else
        std::cout << input << " was not found." << std::endl;
    return 0;
}
    
                                        
