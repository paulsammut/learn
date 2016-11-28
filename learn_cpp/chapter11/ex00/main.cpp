#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <string>

class Person
{
public:
    std::string m_name;
    int m_age;

    Person(std::string name="", int age=0) : m_name(name), m_age(age)
    {
    }

    std::string getName() {
        return m_name;
    }
    int getAge()    {
        return m_age;
    }
};

class BaseballPlayer : public Person
{
public:
    double m_battingAverage;
    int m_homeRuns;

    BaseballPlayer(double battingAverage = 0.0, int homeRuns = 0) 
        : m_battingAverage(battingAverage) , m_homeRuns(homeRuns) { }
};

class Employee : public Person
{
public:
    double m_salary;
    long m_ID;

    Employee(double salary, long ID) : m_salary(salary), m_ID(ID) {}

    void printNameAndSalary() 
    {
        std::cout << m_name << ": " << m_salary << std::endl;
    }
};

class Supervisor : public Employee
{
    long m_overseesIDs[5];

    Supervisor()
    {
    }
}


int main()
{
    BaseballPlayer p1 = *new BaseballPlayer(12, 120);
    p1.m_name = "Babe Ruth";
    p1.m_age = 49;
    std::cout << "Baseball player name is: " << p1.getName() << " and batting average: " << p1.m_battingAverage << std::endl;

	Employee frank(20.25, 12345);
    frank.m_name = "Frank"; // we can do this because m_name is public
 
    frank.printNameAndSalary();
    return 0;
}
