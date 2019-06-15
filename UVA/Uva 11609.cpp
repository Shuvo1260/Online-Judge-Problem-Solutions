#include<cstdio>

long long int big_mod(long long int base, long long int power, long long int mod)
{
    if(power == 0)
        return 1;
    else if(power % 2 == 0)
    {
        long long int value = (big_mod(base, power/2, mod)%mod);
        return ((value * value) % mod);
    }
    else if(power % 2 == 1)
    {
        long long int first = base % mod;
        long long int second = (big_mod(base, power-1, mod)%mod);
        return ((first * second) % mod);
    }
}

int main()
{
    int test;
    scanf("%d", &test);

    for(int t = 1; t <= test; t++)
    {
        long long int number;

        scanf("%lld", &number);

        printf("Case #%d: %lld\n", t, (big_mod(2, number-1, 1000000007) * number) % 1000000007);
    }

    return 0;
}
