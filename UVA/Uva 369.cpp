#include<cstdio>

int main()
{
    long long int n;
    long long int m;
    while(scanf("%lld%lld",&n,&m) == 2)
    {
        if(!n && !m)
            break;
        else
        {
            long long int answer = 1;
            long long int m_factorial = 1;

            for(long long int counter = n - m + 1; counter <= n; counter++, m_factorial++)
            {
                answer *= counter;
                answer /= m_factorial;
            }

            printf("%lld things taken %lld at a time is %lld exactly.\n", n, m,answer);

        }
    }

    return 0;
}
