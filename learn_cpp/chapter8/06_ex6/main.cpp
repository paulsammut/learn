#include <iostream>
#include <cassert>
#include "Date.h"

int main()
{

    const Date testDate;
    testDate.printDate();

    return 0;
} // ar is destroyed here, so the ~IntArray() destructor function is called here
