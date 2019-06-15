#include<stdio.h>
int main()
{
    int a,b,i,s=0;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        i=a;
        a=b;
        b=i;
    }
    for(i=a;i<=b;i++)
    {
        if(i%13!=0)
        {
            s+=i;
        }
    }
    printf("%d\n",s);
    return 0;
}
