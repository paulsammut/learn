#include "Date.h"
#include <iostream> 

//Code for the Date class


//Date::Date(int year, int month, int day) : m_year(year), m_day(day), m_month(month) {}
Date::Date(int year, int month, int day)
{
   m_year = (year);
   m_day = (day); 
   m_month = (month);
}

void Date::SetDate(int year, int month, int day) 
{
    m_month = month;
    m_day = day;
    m_year = year;
}

Date::~Date()
{
    std::cout << "Destructer for Date class called." << std::endl;
}

void Date::printDate() const
{
    std::cout << "Date is: " << m_month << "/" << m_day << "/" << m_year << std::endl;
}
