#include <iostream>

//this little programs showcases the concept of shadowing.
//also, i learned the concept of registers in vim! 

int globalDicks { 59 };

int main()
{
	int globalDicks {39};
	int dicks = 69;
	std::cout << "Hi bitch. Dicks right now is : " << dicks << std::endl;

	{
		int dicks = 96;
		std::cout << "Dicks now is :" <<dicks << std::endl;
	}

	std::cout << "And for the last one. Dicks is :" << dicks << std::endl;

 	std::cout << "===== GLOBAL TEST ===========" << std::endl;
	std::cout << "globalDicks by itsetf :\t" << globalDicks << std::endl;
	std::cout << "::globalDicks: \t" << ::globalDicks << std::endl;
		
	return 0;
}
