#ifndef DATE_H
#define DATE_H

class Date
{
private:
    int m_year = 1987;
    int m_month = 3;
    int m_day = 15;

public:
    Date(){}
    Date(int year, int month, int day);
    ~Date();
    void SetDate(int year, int month, int day);

    int getYear() {
        return m_year;
    }
    int getMonth() {
        return m_month;
    }
    int getDay() {
        return m_day;
    }
    void printDate() const;
};

#endif
