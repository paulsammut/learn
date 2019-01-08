#ifndef INTARRAY_H
#define INTARRAY_H
 
#include <cassert> // for assert()

class IntArray
{
    private:
        int m_length;
        int *m_data;

    public:
        IntArray():
            m_length(0), m_data(nullptr)
    {
    }
};

#endif
