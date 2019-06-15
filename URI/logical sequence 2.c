#include<stdio.h>
int main()
{
    int i,n,a;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        if(i%a==0)
        {

            printf("%d\n",i);
        }
        else
        {
            printf("%d ",i);
        }
    }
    return 0;
}
