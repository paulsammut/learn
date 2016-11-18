#include <iostream>
 
// 1. User asked to enter two floating point numbers (doubles)
// 2. User asked to enter one of following symbols: +,-,*,or /
// 3. Program computers answer on the two numbers. 
// 4. If the user enters something not there, print nothing. 
 
void printWelcome(void)
{
	std::cout << "===================================\n";
	std::cout << "======PAUL CALCULATOR =============\n";
	std::cout << "===================================\n";
	std::cout << "\n";
}


double getUserInputDouble(void)
{
	double uIn;
	std::cout << "Please enter a double: ";
	std::cin >> uIn;
	return uIn;
}

char promptForOp(void)
{
	char opSel;
	std::cout << "Enter one of the following: +, -, *, or /\n";
	std::cin >> opSel;
	return opSel;
}

int main()
{
	double num1, num2;

	printWelcome();
	num1 = getUserInputDouble();
	num2 = getUserInputDouble();
	switch(promptForOp())
	{
		case '+' : 
			std::cout << "Answer is: " << num1+num2 << std::endl;
			break;
		case '-':
			std::cout << "Answer is: " << num1 - num2 << std::endl;
			break;
		case '*':
			std::cout << "Answer is: " << num1 * num2 << std::endl;
			break;
		case '/':
			std::cout << "Answer is: " << num1 / num2 << std::endl;
			break;
		default:
			std::cout << "Illegal input you dipshit." << std::endl;
			break;
	}

	return 0;
}
