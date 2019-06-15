#include<stdio.h>
int main()
{
    int a,b,c,i,t,j;
    while(scanf("%d",&t)==1)
    {
        for(j=1;j<=t;j++)
        {
            scanf("%d%d%d",&a,&b,&c);
            if(a>b)
            {
                i=a;
                a=b;
                b=i;
            }
            if(b>c)
            {
                i=b;
                b=c;
                c=i;
            }
            if(a>b)
            {
                i=a;
                a=b;
                b=i;
            }
            printf("Case %d: %d\n",j,b);
        }
    }

    return 0;
}
