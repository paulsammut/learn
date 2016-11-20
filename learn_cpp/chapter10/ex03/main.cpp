// Chapter 10 lesson!
// 10.3 Quiz Aggregation!
#include <cassert>
#include <iostream>
#include <vector>

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
    std::vector<Teacher*> m_teachers; 

public:
    Department()
    {
    }

    //add a new pointer to a teacher!
    void add(Teacher *teacher)
    {
        m_teachers.push_back(teacher);
    }

    friend std::ostream& operator<<(std::ostream &out, Department &dept)
    {
        for(std::vector<Teacher*>::size_type i = dept.m_teachers.size() - 1; 
                i != (std::vector<Teacher*>::size_type) -1; i--)
            out << dept.m_teachers[i]->getName() << std::endl;
        return out;
    }

    // We don't need to worry about destroying the vector array.

};

int main()
{
    // Create a teacher outside the scope of the Department
    Teacher *t1 = new Teacher("Bob"); // create a teacher
    Teacher *t2 = new Teacher("Frank");
    Teacher *t3 = new Teacher("Beth");
    {
        // Create a department and use the constructor parameter to pass
        // the teacher to it.    
        Department dept;
        dept.add(t1);
        dept.add(t2);
        dept.add(t3);
        std::cout << dept;
    }   //dept goes out of scope here and is destroyed;

    //Teacher still exists! Duh!!
    std::cout << t1->getName() << " still exists!"<< std::endl;
    std::cout << t2->getName() << " still exists!"<< std::endl;
    std::cout << t3->getName() << " still exists!"<< std::endl;

    delete t1;
    delete t2;
    delete t3;

    return 0;
}

