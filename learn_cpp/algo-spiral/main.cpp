#include <string>
#include <iostream>

using namespace std;

int** spiral(int n){
    int **ret = new int*[n];
    for ( int i = 0; i < n; i++){
        ret[i] = new int[n];
    }

    // now we have a preallocated array
    // we're going to break up the algo into 4 legs, top-inc, right-inc,
    // bottom-dec, and left-dec. 
    
    int layer = 0;
    int count = 1;
    int lim = n*n;


    // 1 - 1
    // 2 - 4
    // 3 - 9
    // 4 - 16
    // 

    // check if we equal zero
    if ( n == 0 ) { return ret; }

    while(true){

        // top increment
        for(int i = layer; i < n-layer; i++){
            // cout << "BD: ["<< layer << "][" << i << "]" << endl;
            ret[layer][i] = count++;
            if ( count > lim) { return ret; }
        }

        // right incrementing
        for(int i = layer+1; i < n-layer; i++){
            // cout << "BD: ["<< i << "][" << n-layer-1 << "]" << endl;
            ret[i][n-layer-1] = count++;
            if ( count > lim) { return ret; }
        }

        // bottom decrementinj
        for(int i = n - layer - 2; i >= layer; i--){
            // cout << "BD: ["<< n-layer-1 << "][" << i << "]" << endl;
            ret[n-layer-1][i] = count++;
            if ( count > lim) { return ret; }
        }

        // left decrementing
        for(int i = n - layer - 2; i > layer; i--){
            ret[i][layer] = count++;
            if ( count > lim) { return ret; }
        }

        layer++;
    }

    return ret;
}

int main() {

    int n = 20;
    int** s = spiral(n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << s[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
