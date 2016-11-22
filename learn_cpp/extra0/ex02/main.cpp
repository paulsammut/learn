// Function Pointer Extra Lesson!
// http://www.newty.de/fpt/intro.html
// Lesson 2.
//
//


#include <iostream>

using namespace std;

int DoIt(float a, char b, char c){ cout << "TMyClass::DoIt"<< endl; return a+b+c;};

//------------------------------------------------------------------------------------
// 2.6 How to Pass a Function Pointer

// <pt2Func> is a pointer to a function which returns an int and takes a float and two char
void PassPtr(int (*pt2Func)(float, char, char))
{
   int result = (*pt2Func)(12, 'a', 'b');     // call using function pointer
   cout << result << endl;
}

// execute example code - 'DoIt' is a suitable function like defined above in 2.1-4
void Pass_A_Function_Pointer()
{
   cout << endl << "Executing 'Pass_A_Function_Pointer'" << endl;
   PassPtr(&DoIt);
}

//------------------------------------------------------------------------------------
// 2.7 How to Return a Function Pointer

float Plus      (float a, float b)      {return a+b;    }
float Minus     (float a, float b)      {return a-b;    }

// Direct solution: Function takes a char and returns a pointer to a
// function which is taking two floats and returns a float. <opCode>
// specifies which function to return


float (*GetPtr1(const char opCode))(float, float)
{
    if(opCode == '+')
        return &Plus;
    else
        return &Minus;  // default if invalid operator was passed
}

// Solution using a typedef: Define a pointer to a function which is 
// taking two floats and returns a float

typedef float(*pt2Func)(float, float);

// Function takes a char and returns a function pointer which is defined
// with the typdef above. <opCode> specifies which function to return
pt2Func GetPtr2(const char opCode)
{
    if(opCode == '+')
        return &Plus;
    else
        return &Minus;  // default if invalid operator was passed
}


// Execute example code
void Return_A_Function_Pointer()
{
    cout << endl << "Executing 'Return_A_Function_Pointer'" << endl;

    //define a function pointer and initialize it to NULL
    float (*pt2Function)(float, float) = NULL;

    pt2Function= GetPtr1('+');  // get function from function 'GetPtr1'
    cout << (*pt2Function)(2,4) << endl;    // call function using the pointer

    pt2Function = GetPtr2('-'); // get function from function 'GetPtr2'
    cout << (*pt2Function)(2,4) << endl;    // call function using the pointer
}

//------------------------------------------------------------------------------------
int main()
{
    Pass_A_Function_Pointer();
    Return_A_Function_Pointer();
    return 0;
}
