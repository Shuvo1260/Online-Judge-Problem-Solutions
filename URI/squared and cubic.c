#include<stdio.h>

int main()
{
    int i,n,c,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=i*i;
        d=i*c;
        printf("%d %d %d\n",i,c,d);
    }
    return 0;
}
