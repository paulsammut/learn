#include <iostream>
#include <array>
#include <string>
#include <vector>
#include "storage.h"
#include "display.h"

int main()
{
    std::cout << "At least this runs." << std::endl;

    Storage storage(5, 6.7);
    Display display(false);

    display.displayItem(storage);

    return 0;
}

