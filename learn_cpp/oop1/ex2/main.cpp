#include <iostream>
#include <vector>

using namespace std;
 
class A {
public:
    A()
    {
        cout << "Constructing A." << endl;
    }
    virtual int getNum() = 0;
    virtual ~A()
    {
        cout << "Destructing B." << endl;
    }
};

class B : public A{
private:
    vector<int> data;
public:
    B()
    {
        data = vector<int>(100000, 0);
        cout << "Constructing B." << endl;
    }
    int getNum() override
    {
        return 69;
    }
    ~B()
    {
        cout << "Destructing B." << endl;
    }
};


int main()
{
    A *pB = new B;
    cout << "B getNum() :" << pB->getNum() <<endl;
    delete pB;
    return 0;
}
