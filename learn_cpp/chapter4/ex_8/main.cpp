#include <iostream>
#include "support_1.h"


int main()
{
    RoboCar TD2 {1, "TechDemo2", 22}; 
    
    TD2 = increaseCapability(TD2);

    std::cout << "Hello. Robocar has capability of: " << TD2.capability << std::endl;

    return 0;
}

