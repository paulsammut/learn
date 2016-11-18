#include <vector>
#include <iostream>

int main()
{
    //==============================================================================
    //============== For Each Loops ================================================
    //==============================================================================

    int *d_array = new int[1000];  
    int n_array[5] = {6, 7, 4, 3, 2};
    
    for(auto &element : n_array)
    {
        std::cout << element << "\t" << std::endl;
        element ++;
    }

    // to protect the elements for adultry;
    for(const auto &element : n_array)
    {
        std::cout << element << "\t" << std::endl;
        //element ++; I can't do this because i set the element as a constant. 
    }
   

    std::vector<int> v_Array = { 5, 2, 3, 1 };

    for( auto element : v_Array )
    {
        std::cout << element << "\t";
    }
    std::cout << std::endl;


    delete d_array;
    d_array = nullptr;

    return 0;
}
