#include<stdio.h>
int main()
{
    int t,i;
    long long a,b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld",&a,&b);
        if(a==b)
        {
            printf("=\n");
        }
        else if(a<b)
        {
            printf("<\n");
        }
        else if(a>b)
        {
            printf(">\n");
        }
    }
    return 0;
}
