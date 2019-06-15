#include<stdio.h>
int main()
{
    long int t,r1,r2,r,i;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld%ld",&r1,&r2);
        r=r1+r2;
        printf("%ld\n",r);
    }
    return 0;
}
