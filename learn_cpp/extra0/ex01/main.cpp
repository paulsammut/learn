// Funciton Pointer Extra Lesson!
// http://www.newty.de/fpt/intro.html
// Lesson 2.
//
//

// 2.1 define a funciton pointer and initialize to NULL

#include <iostream>

using namespace std;

class TMyClass
{
public:
    int DoIt    (float a, char b, char c)
    {
        cout << "TMyClass::DoIt" << std::endl;
        return a+b+c;
    }

    int DoMore  (float a, char b, char c) const
    {
        cout << "TMyClass::DoMore" << std::endl;
        return a+b+c;
    }
};


int main()
{
    //int (*pt2Function)(float, char, char) = NULL;                       // C
    int (TMyClass::*pt2Member)(float, char, char) = NULL;               // C++
    int (TMyClass::*pt2ConstMember)(float, char, char) const = NULL;    // C++


    pt2ConstMember = &TMyClass::DoMore; // correct assignment using the address operator
    pt2Member = &TMyClass::DoIt;    // note: <pt2Member> may also legally point to &DoMore

    cout << "pt2Member: " << pt2Member << std::endl;

    if(pt2ConstMember == &TMyClass::DoMore)
        cout << "Pointer points to TMyClass::DoMore" << endl;


    // 2.5 calling a function pointer
    TMyClass instance1;
    int result3 = (instance1.*pt2Member)(12, 'a','b');
    //int result4 = (*this.*pt2Member)(12, 'a','b');      //if this pointer can be used

    TMyClass* instance2 = new TMyClass;
    int result4  = (instance2->*pt2Member)(12, 'a', 'b');   // instance2 is a pointer
    delete instance2;

    return 0;

}
