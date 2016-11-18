#include <iostream>
#include <string>
#include <sstream>
 
// returns true if x and y are equal, false otherwise
bool isEqual(int x, int y)
{
    return (x == y); // operator== returns true if x equals y, and false otherwise
}
 
int main()
{
	std::cout << "Enter an integer: ";
	int x;
	std::cin >> x;

	std::cout << "Enter another integer: ";
	int y;
	std::cin >> y;

	if (isEqual(x, y))
	std::cout << x << " and " << y << " are equal" << std::endl;
	else
	std::cout << x << " and " << y << " are not equal" << std::endl;
		
	std::cout << "Is that woman behind you being a loud annoying person?\n";
	
	bool annoyingLady;
	std::string annoyingLadyInput;
	std::cin >> annoyingLadyInput;
	
	std::cout << annoyingLadyInput << "\n";
	
	int ch { };
	std::cout << ch << "\n";

	std::cout << static_cast<int>(ch) << std::endl;
	
	std::cout << "Enter a character: ";
	std::cin >> ch;
	std::cout << "\nThe character you entered is: " << static_cast<int>(ch) << "\n";
	
	int intVar {0b11011101 };
	std::cout << intVar << std::endl;
	
    	return 0;
}
