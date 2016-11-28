#include <string>
#include <iostream>

// So this is a simple exercise that showcases the order of construction 
// that c++ uses with derived classes. First is calls the default 
// constructor of the parent class and then it goes down the chain
// calling each constructor.

using namespace std;

class A
{
public:
    A()
    {
        cout << "A" << endl;
    }
};
 
class B: public A
{
public:
    B()
    {
        cout << "B" << endl;
    }
};
 
class C: public B
{
public:
    C()
    {
        cout << "C" << endl;
    }
};
 
class D: public C
{
public:
    D()
    {
        cout << "D" << endl;
    }
};

int main()
{
    cout << "Constructing A: " << endl;
    A cA;
 
    cout << "Constructing B: " << endl;
    B cB;
 
    cout << "Constructing C: " << endl;
    C cC;
 
    cout << "Constructing D: " << endl;
    D cD;

	return 0;
}
