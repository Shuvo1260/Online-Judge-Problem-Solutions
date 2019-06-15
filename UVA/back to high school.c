#include<stdio.h>


int main()
{
    long long int a,b,c;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        c=2*a*b;
        printf("%lld\n",c);
    }
    return 0;
}
