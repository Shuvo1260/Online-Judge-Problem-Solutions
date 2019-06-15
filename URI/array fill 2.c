#include<stdio.h>
int main()
{
    int i,n,j=0;
    scanf("%d",&n);
    for(i=0;i<1000;i++)
    {
        if(i%n==0)
            j=0;
        printf("N[%d] = %d\n",i,j);
        j++;

    }
    return 0;
}
