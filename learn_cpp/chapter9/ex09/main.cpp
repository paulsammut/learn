// Chapter 9 lesson!
// 9.8 Section quiz!!
#include <iostream>
#include <cmath>
#include <string>
#include <cassert>
#include <vector>

struct StudentGrade
{
    std::string name;
    char grade;
};

class GradeMap
{
private:
    std::vector<StudentGrade> m_map;
public:
    GradeMap() {}

    char& operator[](std::string parameter);
};

char& GradeMap::operator[](std::string parameter)
{
    //bool exists = false;
    for(StudentGrade &element : m_map) {
        // exists = (element.name == parameter || exists) ? true : false;
        if(element.name == parameter)
            return element.grade;
    }

    // we don't have this student, so.. make it!!
    StudentGrade temp;
    temp.name = parameter;
    temp.grade = 'A';
    m_map.push_back(temp);
    return m_map.back().grade;
}

int main()
{
    GradeMap grades;
    grades["Joe"] = 'A';
    grades["Frank"] = 'B';
    std::cout << "Joe has a grade of " << grades["Joe"] << std::endl;
    std::cout << "Frank has a grade of " << grades["Frank"] << std::endl;

    return 0;
}
