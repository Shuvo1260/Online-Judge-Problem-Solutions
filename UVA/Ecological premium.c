#include<stdio.h>
int main()
{
    int test,i,j,farmer,yard,animal,environment,sum;
    while(scanf("%d",&test)!=EOF)
    {
        for(i=0;i<test;i++)
        {
            sum=0;
            scanf("%d",&farmer);
            for(j=0;j<farmer;j++)
            {
                scanf("%d%d%d",&yard,&animal,&environment);
                sum+=yard*environment;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
