// Chapter 10 lesson!
// 10.3 Aggregation!
#include <cassert>
#include <iostream>

class Teacher
{
private:
    std::string m_name;

public:
    Teacher(std::string name) : m_name(name) {}

    std::string getName() { return m_name; }
};

class Department
{
private:
    Teacher *m_teacher; //this dept holds only one teacher for simplicity

public:
    Department(Teacher *teacher=NULL) : m_teacher(teacher) {}
};

int main()
{
    // Create a teacher outside the scope of the Department
    Teacher *teacher = new Teacher("Bob"); //create the teacher
    {
        // Create a department and use the constructor parameter to pass
        // the teacher to it.    
        Department dept(teacher);
    }   //dept goes out of scope here and is destroyed;

    //Teacher still exists! Duh!!
    std::cout << teacher->getName() << " still exists!"<< std::endl;

    delete teacher;
    return 0;
}

