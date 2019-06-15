#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    long long int n;
    int test = 1;

    while(scanf("%lld", &n) == 1 && n)
    {
        long long int sum;
        long long int minimum = n+2;
        long long int temp;
        for(int number = 1; number <= n/2+1; number++)
        {
            temp = n / number;

            if(temp * number == n)
            {
                sum = temp + number; //printf("%lld %lld\n", sum, minimum);
                minimum = min(sum, minimum);
            }

        }

        printf("Case %d: %lld\n", test++, minimum);
    }


    return 0;
}
