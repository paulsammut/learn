#include <iostream>
 
struct DateStruct
{
    int year;
    int month;
    int day;
};

class DateClass
{
        int m_year;
        int m_month;
        int m_day;

    public:
        DateClass()
        {
            m_year = 1987;
            m_month = 3;
            m_day = 15;
        }

        DateClass(int year, int month=3, int day=15)
        {
            m_day = day;
            m_month = month;
            m_year = year;
        }

        void print()
        {
            std::cout << m_year << "/" << m_month << "/" << m_day << std::endl;
        }

        void setDate(int year, int month, int day)
        {
            m_day = day;
            m_month = month;
            m_year = year;
        }
};

void print(DateStruct &date)
{
    std::cout << date.year << "/" << date.month << "/" << date.day << std::endl;
}
 
int main()
{
    DateStruct today { 2020, 10, 14 }; // use uniform initialization
 
    today.day = 16; // use member selection operator to select a member of the struct
    print(today);
 
    DateClass dcObject(2005); 
    dcObject.print();

    return 0;
}
