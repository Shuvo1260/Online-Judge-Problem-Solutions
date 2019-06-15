#include<stdio.h>
int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    for(i=1;j<n;i++)
    {
        if(i%4==0)
        {
            printf("PUM\n");
            j++;
        }
        else
            printf("%d ",i);
    }
    return 0;
}
