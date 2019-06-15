#include<cstdio>
#include<cmath>

int main()
{
    int test;

    scanf("%d", &test);

    while(test--)
    {
        int e, f, c;

        scanf("%d%d%d", &e, &f, &c);

        int total_bottle = e + f;
        int can_drink = 0;

        while(total_bottle >= c)
        {
            int temp = total_bottle / c;
            can_drink += temp;
            total_bottle %= c;
            total_bottle += temp;
        }

        printf("%d\n", can_drink);
    }

    return 0;
}

