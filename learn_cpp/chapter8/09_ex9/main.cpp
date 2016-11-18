#include <iostream>
#include <vector>

class Something
{

private:
    static int s_idGenerator;
    int m_id;
    static const int s_const = 12;

public:
    static std::vector<char> s_mychars;
    Something()
    {
        m_id = s_idGenerator++;    //grab the next id from the id generator
    }

    static int getIdGen()
    {
        return s_idGenerator;
    }

    static int getID2(); // Here's the decleration of the static function
    int getID() const 
    {
        return m_id;
    }

    int getConst() 
    {
        return s_const;
    }
};

std::vector<char> Something::s_mychars = {'a', 'e','i','o','u'};

int Something::s_idGenerator = 1; 

int Something::getID2() { return Something::s_idGenerator; } //this is the definition outside of the class

int main()
{
    Something thing1;
    Something thing2;
    Something thing3; 

    std::cout << thing1.getID() << std::endl;
    std::cout << thing2.getID() << std::endl;
    std::cout << thing3.getID() << std::endl;
    std::cout << "OK. The current value of the static variable s_ideGenerator is: " << Something::getIdGen() << std::endl;
    std::cout << "Jason is a faggot!!" << std::endl;


    return 0;
}
