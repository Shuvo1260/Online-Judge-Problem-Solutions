#include<cstdio>

long int big_mod(long int base, long int power, long int mod)
{
    if(power == 0)
        return 1;
    else if(power % 2 == 0)
    {
        long int value = (big_mod(base, power/2, mod) % mod);
        return ((value * value) % mod);
    }
    else if(power % 2 == 1)
    {
        long int first = base % mod;
        long int second = (big_mod(base, power-1, mod)) % mod;
        return ((first * second)% mod);
    }
}


int main()
{
    long int base;
    long int power;
    long int mod;

    bool flag = true;
    while(scanf("%ld%ld%ld", &base, &power, &mod) == 3)
    {
        if(!flag)
        {
            scanf("\n");
        }
        flag = false;

        long int result = big_mod(base, power, mod);

        printf("%ld\n",result);
    }

    return 0;
}
