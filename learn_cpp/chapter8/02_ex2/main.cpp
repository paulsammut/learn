#include <iostream>
#include <array>
#include <string>
#include <vector>

class SampleClass
{
    private:
        int m_var1 = 1;
        int m_var2 = 2;
        int m_var3 = 3;
    public:
        
        SampleClass(){} 
        SampleClass(int one, int two, int three) : m_var1(one), m_var2(two),  m_var3(three){} 
        int get1()  {   return m_var1;  }
        int get2()  {   return m_var2;  }
        int get3()  {   return m_var3;  }

};

int main()
{
    std::cout << "Hi world. This is hard!" << std::endl; 

    SampleClass sample(12,13,14);

    std::cout << sample.get1() << sample.get2() << sample.get3() << std::endl;

    return 0;
}
