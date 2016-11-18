#include <iostream>
#include <cassert>
#include <array>
#include <string>
#include <vector>
#include <sstream>
#include <cstdlib>

int main(int argc, char** argv)
{
    if( argc <= 1)
    {
        if(argv[0])
            std::cout << "Usage: " << argv[0] << " <number>" << std::endl;
        else
            std::cout << "Usage: <program name> <number>" << std::endl;

        assert(false && "Program not loaded with parameters.");
    }

    std::stringstream convert(argv[1]); //set up a string stream variable named convert, initialized with input from argv[1]

    int myint;
    if(!(convert >> myint)) //do the conversion
        myint = 0; //conversion fails, set myint to 0

    std::cout << "Got integer: " << myint << '\n';   
   
   
   

    std::cout << "There are " << argc << " arguments:\n";

    //Loop through each argument and print its number and value
    for(int count = 0; count < argc; count ++)
        std::cout << "Argument " << count << " is: " << argv[count] << std::endl;
    return 0;
}
