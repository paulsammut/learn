#include <iostream>
#include <vector>

class Storage
{
private:
    int m_nValue;
    double m_dValue;
public:
    //directly initializing our members
    Storage(int nValue, double dValue) : m_nValue(nValue), m_dValue(dValue){ }

    //Make the display class a friend of storage
    friend class Display;
};


class Display
{
    private:
        bool m_displayIntFirst;

    public:
        Display(bool displayIntFirst) { m_displayIntFirst = displayIntFirst; }
        
        void displayItem(Storage & storage)
        {
            if (m_displayIntFirst)
                std::cout << storage.m_nValue << " " << storage.m_dValue << std::endl;
            else
                std::cout << storage.m_dValue << " " << storage.m_nValue << std::endl;
        }
};

int main()
{
    Storage storage(5, 6.7);
    Display display(false);

    display.displayItem(storage);

    return 0;
}
