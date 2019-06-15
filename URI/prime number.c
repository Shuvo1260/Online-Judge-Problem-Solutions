#include<stdio.h>
int main()
{
    int i,j,a,n,c=1;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&n);
        c=1;
        for(j=2;j<=n/2;j++)
        {
            if(n%j==0)
                c=0;
        }
        if(c==1)
            printf("%d eh primo\n",n);
        else
            printf("%d nao eh primo\n",n);
    }
    return 0;
}
