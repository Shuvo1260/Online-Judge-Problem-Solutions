#include<stdio.h>
int main()
{
    int n,div;
    while(scanf("%d",&n)!=EOF)
    {
        div=n/2;
        n+=div;
        printf("%d\n",n);
    }
    return 0;
}
