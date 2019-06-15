#include<stdio.h>
long long int f(long long int n)
{
    long long int sum,a;
    do
        {
            sum=0;
            while(n!=0)
            {
                a=n%10;
                sum+=a;
                n=n/10;
            }
            n=sum;



        }while(sum>9);
        return n;
}
int main()
{
    long long int n,a,sum;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)
            exit(0);

        printf("%lld\n",f(n));
    }
}
