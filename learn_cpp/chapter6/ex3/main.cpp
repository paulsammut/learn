#include <iostream>
 
int main()
{
    char mystring[] = "string";
    std::cout << mystring << " has " << sizeof(mystring) << " characters.\n";
    for (int index = 0; index < sizeof(mystring); ++index)
        std::cout << static_cast<int>(mystring[index]) << " ";
 
    char name[20] = "Alex"; // only use 5 characters (4 letters + null terminator)
    std::cout << "My name is: " << name << '\n';
    return 0;
}
