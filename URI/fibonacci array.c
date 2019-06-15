#include<stdio.h>
int main()
{
    long long int fib[60],f=0,s=1,i,n,d,j,a;
    scanf("%lld",&a);
    for(j=0;j<a;j++)
    {
        f=0;
        s=1;
        scanf("%lld",&n);
        fib[0]=0;
        fib[1]=1;
        for(i=1;i<n;i++)
        {
            d=f+s;
            fib[i+1]=d;
            f=s;
            s=d;
        }
        printf("Fib(%lld) = %lld\n",n,fib[n]);
    }

    return 0;
}
