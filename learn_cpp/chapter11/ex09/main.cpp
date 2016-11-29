// 11.7 Showcasing the diamond problem of multiple inheritance
#include <iostream>
#include <array>
#include <string>
#include <vector>

class PoweredDevice
{
};

class Scanner : public PoweredDevice
{
};

class Printer : public PoweredDevice
{
};

class Copier : public Printer, public Scanner
{
};

int main()
{
    return 0;
}

