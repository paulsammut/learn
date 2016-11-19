#include <string>
#include <iostream>
 
class Employee
{
    private:
        int m_id;
        std::string m_name;
                 
    public:
        Employee(int id=0, std::string name="NoName"):    m_id(id), m_name(name)
        {
            std::cout << "Employee " << m_name << " created.\n";
        }
                  
        // Use a delegating constructors to minimize redundant code
        Employee(std::string name) : Employee(0, name) { }
};


int main(int argc, char** argv)
{
    Employee defEmp;

    Employee Emp("Johnson");

    return 0;
}