#include<stdio.h>


int main()
{
    int a,b,i;


    while(scanf("%d%d",&a,&b))
    {
        int sum=0;


    if(a<=0||b<=0)
    {
        break;
    }
    else
    {
        if(a>b)
        {
            i=a;
            a=b;
            b=i;
        }
        for(i=a;i<=b;i++)
        {
            printf("%d ",i);
            sum+=i;
        }
        printf("Sum=%d",sum);
    }


    printf("\n");

    }

    return 0;
}
