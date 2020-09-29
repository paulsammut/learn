#include <benchmark/benchmark.h>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

static double mul1[1000][1000];
static double mul2[1000][1000];

static void MmultAllocate(benchmark::State &s){
    
    cout << CLS << endl;

    // allocate
    for(int i = 0; i < 1000; i++)
    {
        for(int j = 0; j < 1000; j++)
        {
            mul1[i][j] = 6;
            mul2[i][j] = 0;
        }
    }

    double res[1000][1000];
    
    for(int i = 0; i < 1000; i++)
    {
        for(int j = 0; j < 1000; j++)
        {
            res[i][j] = mul1[i][j] + mul2[i][j];
        }
    }

}

BENCHMARK(MmultAllocate)->DenseRange(0, 32)->Unit(benchmark::kMillisecond);

BENCHMARK_MAIN();
