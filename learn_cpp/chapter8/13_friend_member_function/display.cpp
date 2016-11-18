#include "display.h"
#include <iostream>

#include "storage.h" //for the parameter of the function below

Display::Display(bool displayIntFirst) : m_displayIntFirst(displayIntFirst) {}

void Display::displayItem(Storage& storage)
{
    if(m_displayIntFirst)
        std::cout << storage.m_nValue << " " << storage.m_dValue << std::endl;
    else
        std::cout << storage.m_dValue << " " << storage.m_nValue << std::endl;
}

