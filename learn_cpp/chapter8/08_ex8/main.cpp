#include <iostream>
class Something
{

private:
    static int s_idGenerator;
    int m_id;
    static const int s_const = 12;

public:
    Something()
    {
        m_id = s_idGenerator++;    //grab the next id from the id generator
    }

    int getID() const 
    {
        return m_id;
    }

    int getConst() 
    {
        return s_const;
    }
};


int Something::s_idGenerator = 1; 

int main()
{
    Something thing1;
    Something thing2;
    Something thing3; 

    std::cout << thing1.getID() << std::endl;
    std::cout << thing2.getID() << std::endl;
    std::cout << thing3.getID() << std::endl;
    std::cout << "Jason is a faggot!!" << std::endl;

    return 0;
}
