// Chapter 9 lesson!
// Question 3 FINAL COMPREHENSIVE QUIZ!!!!!!!!!
#include <cassert>
#include <iostream>

class IntArray
{
private:
    int *m_array;
    int m_size;
public:
    IntArray(int size=1) : m_size(size)
    {
        m_array = new int[m_size];
    }

    int& operator[](int index) //overloading the subscript operator to allow for assign
    {
        return m_array[index];
    }

    ~IntArray() //destructor that handles the bad data
    {
        delete[] m_array;
    }

    friend std::ostream& operator<<(std::ostream &out, IntArray &ia);

    IntArray& operator=(const IntArray &ia)
    {
        if( this == &ia)
            return *this;
        
        // we need start from scratch with a new array that's the right size
        delete[] m_array;
        //IntArray(ia.m_size); //this line sends me to the destructor again!!
       m_size = ia.m_size;
       m_array = new int[m_size]; 

        for(int i = 0; i < m_size; i++)
           m_array[i] = ia.m_array[i];
        return *this;
    }   

    IntArray(const IntArray &copy)
    {
        // IntArray(copy.m_size);  
       m_array = new int[copy.m_size]; 
        for(int i = 0; i < copy.m_size; i++)
           m_array[i] = copy.m_array[i];
    }   
};

std::ostream& operator<<(std::ostream &out, IntArray &ia)
{
    for(int i = 0; i < ia.m_size; i++)
    {
        out << ia.m_array[i];
        out << " ";
    }
    out << std::endl;

    return out;
}

IntArray fillArray()
{
    IntArray a(5);
    a[0] = 5;
    a[1] = 8;
    a[2] = 2;
    a[3] = 3;
    a[4] = 6;

    return a;
}

int main()
{
    IntArray a = fillArray();
    std::cout << a;

    IntArray b(1);
    a = a;
    b = a;
    std::cout << b;
    return 0;
}
