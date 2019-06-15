#include<cstdio>
#include<iostream>

using namespace std;

void multiply(long long int f[2][2], long long int m[2][2])
{
    long long int temp[4];
    temp[0] = f[0][0] * m[0][0] + f[0][1] * m[1][0];
    temp[1] = f[0][0] * m[0][1] + f[0][1] * m[1][1];
    temp[2] = f[1][0] * m[0][0] + f[1][1] * m[1][0];
    temp[3] = f[1][0] * m[0][1] + f[1][1] * m[1][1];

    f[0][0] = temp[0];
    f[0][1] = temp[1];
    f[1][0] = temp[2];
    f[1][1] = temp[3];
}

void power(long long int f[2][2], long long int n)
{
    if(n == 0 || n == 1)
        return ;
    else
    {
        long long int m[2][2] = {{1, 1},{1, 0}};

        power(f, n/2);

        multiply(f, f);

        if(n & 1)
            multiply(f, m);
    }
}



long long int fibonacci(long long int n)
{
    if(n == 0)
        return 0;
    else
    {
        long long int f[2][2] = {{1, 1},{1, 0}};

        power(f, n-1);

        return f[0][0];
    }
}

int main()
{
    long long int n;

    while(scanf("%lld", &n) == 1)
    {
        printf("The Fibonacci number for %lld is %lld\n", n, fibonacci(n));
    }


    return 0;
}
