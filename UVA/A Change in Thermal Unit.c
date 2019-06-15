#include<stdio.h>
int main()
{
    int n,c,f,g,i;
    float r;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&c,&f);
        g=f*5;
        r=(float)g/9;
        r+=c;
        printf("Case %d: %.2f\n",i,r);
    }
    return 0;
}
