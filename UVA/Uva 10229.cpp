#include<cstdio>
#include<cmath>

void multiply(long long int f[2][2], long long int m[2][2], int mod)
{
    long long int temp[4];

    temp[0] = ((f[0][0] * m[0][0]) % mod + (f[0][1] * m[1][0]) % mod) % mod;
    temp[1] = ((f[0][0] * m[0][1]) % mod + (f[0][1] * m[1][1]) % mod) % mod;
    temp[2] = ((f[1][0] * m[0][0]) % mod + (f[1][1] * m[1][0]) % mod) % mod;
    temp[3] = ((f[1][0] * m[0][1]) % mod + (f[1][1] * m[1][1]) % mod) % mod;

    f[0][0] = temp[0];
    f[0][1] = temp[1];
    f[1][0] = temp[2];
    f[1][1] = temp[3];
}

void power(long long int f[2][2], long long int n, int mod)
{
    if(n == 0 || n == 1)
        return ;
    else
    {
        long long int m[2][2] = {{1, 1},{1, 0}};

        power(f, n/2, mod);

        multiply(f, f, mod);

        if(n & 1)
            multiply(f, m, mod);
    }
}



long long int fibonacci(long long int n, int mod)
{
    if(n == 0)
        return 0;
    else
    {
        long long int f[2][2] = {{1, 1},{1, 0}};

        power(f, n-1, mod);

        return f[0][0];
    }
}



int main()
{
    long long int n;
    int m;

    while(scanf("%lld%d", &n, &m) == 2)
    {
        int mod = pow(2,m);
        printf("%lld\n", fibonacci(n, mod));
    }


    return 0;
}
