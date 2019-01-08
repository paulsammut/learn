#ifndef EX00
#define EX00

#include <iostream>
#include <list>
#include <set>
#include <map>
#include <string>


int main()
{
    // List
    // =====================================================
    std::list<int> myList;

    // insert 0-5 in it
    for(int i = 0; i < 6; ++i)
    {
        myList.push_back(i);
    }

    // grab a const interator
    std::list<int>::const_iterator it = myList.cbegin();

    // print all of them
    std::cout << "Iteration through our list: " ;
    while(it != myList.end())
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << std::endl;

    // Set
    // =====================================================
    std::set<int> mySet;

    mySet.insert(7);
    mySet.insert(2);
    mySet.insert(-6);
    mySet.insert(8);
    mySet.insert(1);
    mySet.insert(4);
    
    // Iterate through
    
    std::set<int>::const_iterator setIt = mySet.begin();

    std::cout << "Iteration through our set: " ;
    while(setIt != mySet.end())
    {
        std::cout<< *setIt << " ";
        ++setIt;
    }
    std::cout << std::endl;


    // Map 
    // ======================================================
    
    std::map<int, std::string> myMap;

    myMap.insert(std::make_pair(0, "avocado"));
    myMap.insert(std::make_pair(4, "apple"));
    myMap.insert(std::make_pair(2, "orange"));
    myMap.insert(std::make_pair(1, "banana"));
    myMap.insert(std::make_pair(3, "grapes"));
    myMap.insert(std::make_pair(6, "mango"));
    myMap.insert(std::make_pair(5, "peach"));

    // declare an interator
    
    std::map<int, std::string>::const_iterator mapIt = myMap.cbegin();

    std::cout << "Iteration through our map: " ;

    while(mapIt != myMap.end())
    {
        std::cout << mapIt->first << " " << mapIt->second << " : ";
        mapIt++;
    }

    std::cout << std::endl;

    return 0;
}

#endif
