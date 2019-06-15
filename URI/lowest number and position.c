#include<stdio.h>
int main()
{
    int n,a,b=1000,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a<b)
        {
            b=a;
            j=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",b,j);
    return 0;
}
