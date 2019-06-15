#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        i=a;
        a=b;
        b=i;
    }

    for(i=a+1;i<b;i++)
    {
        if(i%5==2||i%5==3)
        {
            printf("%d\n",i);
        }
    }



    return 0;
}
