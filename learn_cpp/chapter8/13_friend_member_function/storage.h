#ifndef STORAGE_H
#define STORAGE_H

#include "display.h"



class Storage
{
    private:
        int m_nValue;
        double m_dValue;
    public:
        Storage(int nValue, double dValue);
        
        friend void Display::displayItem(Storage&);
};

#endif
