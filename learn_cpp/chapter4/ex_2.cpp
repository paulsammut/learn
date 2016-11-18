#include <iostream>

//static duration example

void incAndP()
{
	using namespace std;
	static int s_val = 1;
	++s_val;
	cout << s_val << std::endl;
}

int main()
{
	incAndP();
	incAndP();
	incAndP();
	incAndP();
}
