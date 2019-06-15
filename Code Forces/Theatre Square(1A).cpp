#include<cstdio>

int main()
{
    long long int n, m, a;

    scanf("%lld%lld%lld", &n, &m, &a);

    long long int length = n / a;

    if(n%a != 0)
        length++;

    long long int width = m / a;

    if(m % a != 0)
        width++;

    printf("%lld\n", length * width);

    return 0;
}
