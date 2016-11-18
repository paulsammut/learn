#include <iostream>
 
typedef int (*retFncType)(int,int);
int getInteger()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;
    return x;
}
 
char getOperation()
{
    char op;
 
    do
    {   
        std::cout << "Enter an operation ('+', '-', '*', '/'): ";
        std::cin >> op;
    }
    while (op!='+' && op!='-' && op!='*' && op!='/');
 
    return op;
}

int add(int x, int y)
{
    return x+y;
}

int subtract(int x, int y)
{
    return x - y;
}
 
int multiply(int x, int y)
{
    return x * y;
}
 
int divide(int x, int y)
{
    return x / y;
}

retFncType getArithmeticFunction(char op)
{
    switch (op)
	{
        default: // default will be to add
        case '+': return add;
        case '-': return subtract;
        case '*': return multiply;
        case '/': return divide;
    }
}
int main()
{
    int x = getInteger();
    char op = getOperation();
    int y = getInteger();
 
    retFncType mathFnc = getArithmeticFunction(op);
    
    std::cout << mathFnc(x,y) << std::endl;
    return 0;
}
