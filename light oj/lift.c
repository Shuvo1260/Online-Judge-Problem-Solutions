#include<stdio.h>
int main()
{
    int t,a,b,c,s;
    scanf("%d",&t);
    for(c=1;c<=t;c++)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            s=a*4+((a-b)*4)+19;
        }
        else
        {
            s=a*4+((b-a)*4)+19;
        }
        printf("Case %d: %d\n",c,s);
    }

    return 0;
}
