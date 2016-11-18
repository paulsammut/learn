#include <iostream>
#include <string>

//Quiz for chapter 4.4b
//
// 1. Ask user to enter full name
// 2. Ask user to enter age 
// 3. Tell the user how many years they've lives for each letter in their name. 

int main()
{
    std::string name;
    int age;

    std::cout << "OK. Enter your fucking name: " << std::endl;
    std::getline(std::cin, name);

    std::cout << "OK " << name << ". Now enter your fucking age: " << std::endl;
    std::cin >> age;

    std::cout << "Ok you fucking dipship. You've lived ";

    double res1 = static_cast<double>(age)/name.length();
    
    std::cout << res1 << " years per letter of your name. " << std::endl;
    std::cout << "Whatever the FUCK that means. BYE." << std::endl;

    std::cout << std::endl;

    return 0;    
}
