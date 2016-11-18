#include <iostream>
#include <unistd.h>
#include "myConstants.h"

// A program that simulates a ball being dropped from a tower
// 1. Assume gravity = 9.8 m/s^2
// 2. Initial ball velocity is 0
// 3. Ask user for height of tower in meters 
// 4. Use function to calcuate ball height after x seconds. 

double calcHeight(double startHeight, double time)
{
	return startHeight - (myConstants::gravity * time * time / 2);
}


void printSplash()
{
	std::cout << "================================\n";
	std::cout << "==LET THE BODIES HIT THE FLOOR==\n";
	std::cout << "================================\n";
	std::cout << "\n";
}

int main()
{
	printSplash();

	double startHeight;	//holds the ball height

	std::cout << "Enter an initial height: ";
	std::cin >> startHeight;
	
	bool run(true);		//while loop boolean
	double time(0);		//variable that holds the current time

	double curHeight = calcHeight(startHeight, time);
	
	while(run)
	{
		std::cout << "\rBody height: " << curHeight << std::flush;

		curHeight = calcHeight(startHeight, time);

		if(curHeight <= 0)
		{
			run = false;
			std::cout << std::endl << "BODY HAS HIT THE FLOOR!" << std::endl;
		}
		
		time += 1 / myConstants::updateRate;	//update the time based on rate
		
		usleep(10000);

	}
}
