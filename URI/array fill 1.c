#include<stdio.h>
int main()
{
    int i[10],c,n;
    scanf("%d",&n);
    for(c=0;c<10;c++)
    {
        i[c]=n;
        n*=2;
    }
    for(c=0;c<10;c++)
    {
        printf("N[%d] = %d\n",c,i[c]);
    }
    return 0;
}
