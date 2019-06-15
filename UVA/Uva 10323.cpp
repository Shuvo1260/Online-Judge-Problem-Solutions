#include<cstdio>

int main()
{
    int n;

    while(scanf("%d", &n) == 1)
    {
        if(n >= 0 && n <= 7)
            printf("Underflow!\n");
        else if(n > 13)
            printf("Overflow!\n");
        else if(n < 0 && n % 2 == 0)
            printf("Underflow!\n");
        else if(n < 0 && n % 2 == -1)
            printf("Overflow!\n");
        else
        {
            long long int result = 1;
            for(int number = 2; number <= n; number++)
            {
                result *= number;
            }

            printf("%lld\n", result);
        }
    }


    return 0;
}
