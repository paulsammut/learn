#include "iostream"

int main()
{
	int16_t tittyVar = 232;
	
	std::cout<<"Paul's number is: " << tittyVar << "\n";

	double d1(5000.0);
	double d2(5e3); // another way to assign 5000
	 
	double d3(0.05);
	double d4(5e-2); // another way to assign 0.05
	
	std::cout<<"Paul's double is: " << d4 << "\n";
	
	float f;
	f = 9.87654321f;
	std::cout << f << std::endl;
	f = 987.654321f;
	std::cout << f << std::endl;
	f = 987654.321f;
	std::cout << f << std::endl;
	f = 9876543.21f;
	std::cout << f << std::endl;
	f = 0.0000987654321f;
	std::cout << f << std::endl;

	bool b1 = true; // copy initialization
	bool b2(false); // direct initialization
	bool b3 { true }; // uniform initialization (C++11)
	b3 = false; // assignment
	std::cout << true << std::endl;
	std::cout << false << std::endl;
	     
	std::cout << std::boolalpha; // print bools as true or false
		 
	std::cout << true << std::endl;
	std::cout << false << std::endl;

	return 0;
}
