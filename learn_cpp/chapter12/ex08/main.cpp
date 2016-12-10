#include <iostream>

using namespace std;

class PoweredDevice
{
public:
    PoweredDevice(int power)
    {
		cout << "PoweredDevice: " << power << '\n';
    }
};
 
class Scanner: virtual public PoweredDevice
{
public:
    Scanner(int scanner, int power)
        : PoweredDevice(power) // amazingly this doesn't get called
    {
		cout << "Scanner: " << scanner << '\n';
    }
};
 
class Printer: virtual public PoweredDevice
{
public:
    Printer(int printer, int power)
        : PoweredDevice(power) // amazingly this doesn't get called
    {
		cout << "Printer: " << printer << '\n';
    }
};
 
class Copier: public Scanner, public Printer
{
public:
    Copier(int scanner, int printer, int power)
        : Scanner(scanner, power), Printer(printer, power), PoweredDevice(power)
    {
    }
};

int main()
{
    Copier copier(1,2,3);
}    