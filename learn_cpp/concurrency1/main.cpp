#include <iostream>
#include <thread>
#include <string>
#include <vector>
#include <mutex>

using namespace std;

mutex mtx;

void print(int n, const std::string &str)  {  
    // guard the critical sectino of the code.
    mtx.lock();
    cout << "Printing integer: " << n ;  
    cout << " Printing string: " << str << endl;  
    mtx.unlock();
} 

int main(){

    vector<string> names = {
        "Nadur",
        "Qala",
        "Sannat",
        "Rabat"
    };

    vector<thread> threads;

    cout << "Starting threads" << endl;
    for(int i = 0; i < names.size(); i++)
    {
        threads.push_back(thread(print, i, names[i]));
    }

    for(auto &th : threads)
    {
        th.join();
    }

    return 0;
}
