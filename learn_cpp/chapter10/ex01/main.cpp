// Chapter 10 lesson!
// 10.
#include <cassert>
#include <iostream>
#include "Creature.h"

int main()
{

    std::cout << "Enter a name for your creature: ";
    std::string name;
    std::cin >> name;
    Creature creature(name, Point2D(4,7));

    while(1)
    {
        //print creature's name and location
        std::cout << creature << '\n';

        std::cout << "Enter a new X location for creature (-1 to quit): ";
        int x = 0;
        std::cin >> x;
        if(x==-1)
            break;

        std::cout << "Enter a new Y location for creature (-1 to quit): ";
        int y = 0;
        std::cin >> y;
        if(y==-1)
            break;

        creature.moveTo(x,y);
    }

    return 0;
}

