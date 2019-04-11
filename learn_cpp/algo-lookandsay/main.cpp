#include <string>
#include <iostream>
#include <math.h>

using namespace std;

void lookAndSay(int n){
    // some error handling
    if(n <= 0)
        throw "n must be greater than 0";

    int seq = 12342342;
    int digits = 8;

    // sequence engine
    // - scan through our last sequence, we know how many digits there are
    // - scan through the digits, starting from the left
    for(int i = digits-1; i >= 0; i--){
        int curPow = pow(10,i);
        int curDig = seq / curPow;
        seq = seq - curDig * curPow;
        cout << curDig << endl;
    }
    
    
}

int main() {

    int n = 20;
    lookAndSay(n);

    return 0;
}
