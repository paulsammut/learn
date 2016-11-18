#include <iostream>


int main()
{
    struct Something
    {
        int val1;
        int val2;

    };

    struct SomethingElse
    {
        int val1; 
        int val2;
        Something thing;
    };

    SomethingElse thing;

    thing.thing.val1 = 12;

    std::cout << thing.thing.val1 << std::endl;
    
    int &ref = thing.thing.val1;

    ref = 24;
    
    std::cout << thing.thing.val1 << std::endl;

    struct Person
    {
        int weight;
        int height;
    };

    Person *paul = new Person;
    Person &refPaul = *paul;


    // *paul.weight = 137; Doesn't work. To access member variables of a point, need ()
    (*paul).weight = 137;
    
    refPaul.weight = 129;

    std::cout << "Paul's weight is: " << (*paul).weight << std::endl;
    std::cout << "ref_Paul's weight is: " << refPaul.weight << std::endl;

    return 0;
}
