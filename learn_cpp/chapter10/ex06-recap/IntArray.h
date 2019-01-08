#ifndef INTARRAY_H
#define INTARRAY_H
 
#include <cassert> // for assert()

class IntArray
{
private:
    int m_length;
    int *m_data;

public:
    /**
     * @name Constructor for an empty array.
     * @{ */
    /**  @} */
    
    IntArray():
        m_length(0), m_data(nullptr) // initializer list
    {
    }

    IntArray(int length):
        m_length(length)
    {
        // make sure array is bigger than 0
        assert(length >= 0);

        if(length > 0)
            m_data = new int[length];
        else
            m_data = nullptr;
    }

    /**
     * @name Destructor needed to delete the dynamically allocated array
     * @{ */
    /**  @} */
    ~IntArray()
    {
        delete[] m_data;
    }

    /**
     * @name Erases the array by deallocating the memory, sets length to 0 and
     * sets m_data to the nullptr.
     * @{ */
    /**  @} */
    void erase()
    {
        delete[] m_data;

        m_data = nullptr; //we need to do this so that the m_data pointer doesn't point to deallocated mem
        m_length = 0;
    }

    /**
     * @name Overloaded [] operater that indexes our array
     * @{ */
    /**  @} */
    int& operator[](int index)
    {
        // make sure the index is in bounds
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

    /**
     * @name Returns the length of the array
     * @{ */
    /**  @} */
    int getLength() { return m_length; }

    /**
     * @name Reallocates the array by erasing the array and creating a new empty
     * array of size newLength
     * @{ */
    /**  @} */
    void reallocateArray(int newLength) 
    {
        erase(); // erase the array

        // If empty array we are done.
        if(newLength <= 0) { return; }

        m_length = newLength;
        m_data = new int[newLength];
    }

    /**
     * @name Resizes the array and any exisiting elements are kept
     * @{ */
    /**  @} */
    void resize(int newLength)
    {
        int* newArray = new int[newLength];

        //check for zero array
      if(m_length > 0)
        {
            // old array had stuff in it, must copy

            // figure out how many elements we have to copy. 
            int elementsToCopy = (m_length > newLength) ? newLength : m_length;

            for(int i = 0; i < elementsToCopy ; i++)
            {
                newArray[i] = m_data[i];
            }
        }

        delete[] m_data;

        m_length = newLength;
        m_data = newArray;
    }

    /**
     * @name Inserts an element before an index.
     * @{ */
    /**  @} */
    void insertBefore(int newElement, int index)
    {
        // check to make sure the index is legal
        assert(index >= 0 && index <= m_length);

        // make a new array that is one size bigger
        int* newArray = new int[m_length + 1];

        // copy all the elements before the index
        for(int i = 0; i < index; ++i)
            newArray[i] = m_data[i];

        // copy the new element in
        newArray[index] = newElement;

        // copy the rest of the elements
        for(int i = index+1; i < m_length+1; ++i)
            newArray[i] = m_data[i-1];

        delete[] m_data;
        m_data = newArray;
        ++m_length;
    }

    /**
     * @name Remove an element from an array
     * @{ */
    /**  @} */
    void remove(int index)
    {
        // make sure we're in bounds. This also tests for an empty array
        assert(index >= 0 && index < m_length);

        // make new array with 1 less element
        int* newArray = new int[m_length - 1];
        
        // copy everything up to index
        for(int before = 0; before < index; ++before)
            newArray[before] = m_data[before];

        // copy everything after the index
        for(int after = index; after < m_length ; ++after)
            newArray[after] = m_data[after+1];

        // deallocate the array
        delete[] m_data;
        m_data = newArray;
        --m_length;
    }

    /**
     * @name Convenience function for adding an element after an index
     * @{ */
    /**  @} */
    void insertAfter(int element, int index) { insertBefore(element, index+1); }
    /**
     * @name Convenience function for adding an element at the beginning of the
     * array
     * @{ */
    /**  @} */
    void insertAtBeginning(int element){ insertBefore(element, 0);  }
    /**
     * @name Convenience function for adding the element after the array
     * @{ */
    /**  @} */
    void insertAtEnd(int element) { insertBefore(element, m_length); }
};


#endif
