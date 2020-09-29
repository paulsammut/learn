#include <stdlib.h>
#include <stdio.h>

// 1 3 
// 2 3 
// 3 3 
int sum(int n)
{
    printf("calling %d\n", n);
    if(n == 0)
        return 0;
    else
    {
        return sum(n-1) + n;
    }
}

int explore(int n, int m, int ln, int lm)
{
    int paths = 0;
    if(ln < (n - 1))
        paths += explore(n,m, ln+1, lm);
    if(lm < (m - 1))
        paths += explore(n,m, ln, lm+1);
    if( (ln == ( n - 1 )) && (lm == (m - 1)) )
        return 1;
    return paths;
}

int main(int argc, char** argv)
{
    int n = atoi(argv[1]);
    int m = atoi(argv[2]);
    // printf("Sum up to n: %d is %d\n", n, sum(n));
    printf("paths to n: %d by m: %d is: %d\n", n, m, explore(n,m,0,0));
    return 0;
}
