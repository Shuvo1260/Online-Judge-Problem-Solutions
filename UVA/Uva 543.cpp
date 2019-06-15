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

int main()
{
    sieve();
    int n;

    while(scanf("%d", &n) == 1 && n)
    {
        bool flag = false;
        for(int first_number = 3; first_number < n; first_number += 2)
        {
            if(check(prime[first_number>>5], first_number&31) == 0)
            {
                int dif = n - first_number;
                if(dif % 2 == 0)
                    dif++;
                for(int second_number = dif; second_number < n; second_number += 2)
                {
                    if(check(prime[second_number >> 5], second_number&31) == 0 && first_number + second_number == n)
                    {
                        printf("%d = %d + %d\n", n, first_number, second_number);
                        flag = true;
                        break;
                    }
                }
                if(flag)
                    break;
            }
        }
        if(!flag)
            printf("‘Goldbach's conjecture is wrong.\n");
    }


    return 0;
}
