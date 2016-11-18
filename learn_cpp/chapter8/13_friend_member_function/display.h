//#include "storage.h"

#ifndef DISPLAY_H
#define DISPLAY_H

//#include "storage.h"

class Storage;

class Display 
{
    private:
        bool m_displayIntFirst;

    public:
        Display(bool displayIntFirst);

        void displayItem(Storage& storage); //forward declaration
};


#endif
