#include <string>
#include <iostream>
#include <stdlib.h>  
#include <time.h>

/* We are going to demonstrate overloading functions in derived classes
 *
 */

using namespace std;

class Base{
private:
    int m_value;
public:
    Base(int value) : m_value(value)
    {
    }
    void identify()
    {
        cout << "I am a Base." << endl;
    }
};

class Identity{
private:
    int m_id;
public:
    Identity()
    {
        srand( time(NULL) );
        m_id = rand() % 100000;
    }
protected:
    void printId()
    {
        cout << "Id number is: " << m_id << endl;
    }
};

class Derived : public Base, Identity
{
public:
    Derived(int value) : Base(value)
    {
    }
    void identify()
    {
        // Base::identify();
        cout << "I am a Derived." << endl;
        printId();
    }
};


int main()
{
    Base base(12);
    base.identify();
    Derived derived(12);
    derived.identify();
    return 0;
}
