#include<cstdio>

long long int qube(long long int number)
{
    return number * number * number;
}

int main()
{
    long long int number;

    while(scanf("%lld", &number) == 1)
    {
        long long int sum = 0;
        for(int counter = 1; counter <= number; counter++)
        {
            sum += qube(counter);
        }

        printf("%lld\n", sum);
    }

    return 0;
}

