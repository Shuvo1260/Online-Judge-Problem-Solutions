#include<stdio.h>
int main()
{
    int n,i,j,a,s=0;

    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&n);
        for(j=1;j<n;j++)
        {
            if(n%j==0)
            {
                s+=j;
            }
        }
        if(s==n)
        {
            printf("%d eh perfeito\n",n);
        }
        else
        {
            printf("%d nao eh perfeito\n",n);
        }
        s=0;
    }

    return 0;
}
