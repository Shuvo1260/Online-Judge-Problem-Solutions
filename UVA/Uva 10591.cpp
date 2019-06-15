#include<bits/stdc++.h>

using namespace std;

long long int power_reverse(long long int value)
{
    long long int converted_value;

    long long int power = 0;

    while(value)
    {
        converted_value = value % 10;

        power += converted_value * converted_value;

        value /= 10;
    }

    return power;
}

int main()
{
    int test;

    long long int n;

    while(scanf("%d", &test) == 1)
    {
        for(int t = 1; t <= test; t++)
        {
            scanf("%lld", &n);

            long long int value = n;

            while(true)
            {
                value = power_reverse(value);
                if(value / 10 == 0)
                    break;
            }

            if(value == 1)
            {
                printf("Case #%d: %lld is a Happy number.\n", t, n);
            }
            else
                printf("Case #%d: %lld is an Unhappy number.\n",t, n);
        }
    }




    return 0;
}
