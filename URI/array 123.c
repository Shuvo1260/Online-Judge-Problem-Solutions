#include<stdio.h>
int main()
{
    int n,i,c,j,k;
    while(scanf("%d",&n)!=EOF)
    {
        int a[n][n];
        j=0;
        k=n-1;
        for(i=0;i<n;i++)
        {
            for(c=0;c<n;c++)
            {
                if(c==k)
                {
                    a[i][c]=2;
                }
                else if(c==j)
                {
                    a[i][c]=1;
                }
                else
                {
                    a[i][c]=3;
                }
            }
            j++;
            k--;
        }
        for(i=0;i<n;i++)
        {
            for(c=0;c<n;c++)
            {
                printf("%d",a[i][c]);
            }
            printf("\n");
        }
    }
    return 0;
}
