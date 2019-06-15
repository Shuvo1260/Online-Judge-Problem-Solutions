#include<stdio.h>
int main()
{
    int t,a,b,sum;
    scanf("%d",&t);
    int i,j;
    for(i=0;i<t;i++)
    {
        sum=0;
        scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++)
        {
            if(j%2!=0)
                sum+=j;
        }
        printf("Case %d: %d\n",i+1,sum);
    }
    return 0;
}
