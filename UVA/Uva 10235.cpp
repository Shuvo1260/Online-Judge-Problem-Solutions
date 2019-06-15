#include<bits/stdc++.h>
#define Max 1000000

using namespace std;


int prime[(Max/32)+2];

bool check(int n, int pos)
{
    return (bool) (n & (1 << pos));
}

int Set(int n, int pos)
{
    return n = n | (1 << pos);
}

void sieve()
{
    int len = sqrt(Max);

    for(int i = 2; i <= Max; i+=2)
        prime[i>>5] = Set(prime[i>>5], i&31);

    for(int i = 3; i <= len; i += 2)
    {
        if(check(prime[i>>5], i&31) == 0)
        {
            for(int j = i * i; j <= Max; j += (i << 1))
            {
                prime[j>>5] = Set(prime[j>>5], j&31);
            }
        }
    }
}

int number_reverse(int value)
{
    int converted_value = 0;

    while(value)
    {
        converted_value += value % 10;

        value /= 10;
        if(value)
            converted_value *= 10;
    }

    return converted_value;
}

int main()
{
    sieve();

    int n;

    while(scanf("%d", &n) == 1)
    {
        if(check(prime[n>>5], n&31) == 0)
        {
            int rev_value = number_reverse(n);

            if(check(prime[rev_value>>5], rev_value&31) == 0 && n != rev_value)
                printf("%d is emirp.\n", n);
            else
                printf("%d is prime.\n", n);
        }
        else
        {
            printf("%d is not prime.\n", n);
        }
    }


    return 0;
}
