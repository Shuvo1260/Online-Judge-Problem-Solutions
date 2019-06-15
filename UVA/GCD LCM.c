#include<stdio.h>
int main()
{
    long int g,l,t,i;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld%ld",&g,&l);
        if(l%g==0)
        {
            printf("%ld %ld\n",g,l);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
