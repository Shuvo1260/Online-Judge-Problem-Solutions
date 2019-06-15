#include<stdio.h>
int main()
{
    int n,first=0,second=1,fibonacci,i;
    scanf("%d",&n);
    printf("0 1 ");
    for(i=1;i<n-1;i++)
    {
        fibonacci=first+second;
        if(i==n-2)
        {
            printf("%d\n",fibonacci);
        }
        else
        {
            printf("%d ",fibonacci);
        }

        first=second;
        second=fibonacci;
    }

    return 0;
}
