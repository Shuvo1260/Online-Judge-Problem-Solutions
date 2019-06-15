#include<stdio.h>
int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<1)
            a[i]=1;
    }
    for(i=0;i<10;i++)
    {
        printf("X[%d] = %d\n",i,a[i]);
    }
    return 0;
}
