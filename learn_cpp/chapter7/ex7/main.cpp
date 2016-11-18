#include <iostream>
#include <array>
#include <string>
#include <vector>

int main()
{
    if ( 5 != 6)
      std::cout << "not equal!" << std::endl;
    
    std::string hello = "Hello, world!";
    std::cout << "Enter a letter: ";

    char ch;
    std::cin >> ch;

    int index = hello.find(ch);
    if(index != -1)
        std::cout << ch << " was found at index " << index << std::endl;
    else
        std::cout << ch << " wasn't found." << std::endl;

    return 0;  
}
