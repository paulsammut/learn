// Chapter 9 lesson!
// FINAL COMPREHENSIVE QUIZ!!!!!!!!!
#include <cassert>
#include <iostream>
 
class Average
{
private:
    int32_t m_sum;
    int8_t m_count;
public:
	Average(int sum = 0, int count = 0) : m_sum(sum), m_count(count) {}
    Average& operator+=(int val) {
        m_sum += val;
        m_count++;
        return *this;
    }

    friend std::ostream& operator<<(std::ostream &out, const Average &avg);

};

std::ostream& operator<<(std::ostream& out, const Average &avg)
{
	//double temp = static_cast<double>(avg.m_sum)/static_cast<double>(avg.m_count);
    //out << temp;
    out << (double)avg.m_sum/avg.m_count;
    return out;
}

int main()
{
	Average avg;
	
	avg += 4;
	std::cout << avg << '\n'; // 4 / 1 = 4
	
	avg += 8;
	std::cout << avg << '\n'; // (4 + 8) / 2 = 6

	avg += 24;
	std::cout << avg << '\n'; // (4 + 8 + 24) / 3 = 12

	avg += -10;
	std::cout << avg << '\n'; // (4 + 8 + 24 - 10) / 4 = 6.5

	(avg += 6) += 10; // 2 calls chained together
	std::cout << avg << '\n'; // (4 + 8 + 24 - 10 + 6 + 10) / 6 = 7

	Average copy = avg;
	std::cout << copy << '\n';

	return 0;
}
