#include<stdio.h>
int main()
{
    int n,k,s,i,l,m=0;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        m=0;
        l=n;
        while(n>=k)
        {
           s=n/k;
           i=n%k;
           m+=s;
           n=s+i;
        }
        printf("%d\n",l+m);
    }
    return 0;

}
