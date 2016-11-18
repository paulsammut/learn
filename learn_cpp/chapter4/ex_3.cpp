#include <iostream>
#include <typeinfo>


int main()
{
	short a(4);
	short b(5);
    std::cout << typeid(a + b).name() << " " << a + b << std::endl; // show us the type of a + b
    
    std::cout << typeid(static_cast<float>(a)).name() << std::endl;

    return 0;
}
