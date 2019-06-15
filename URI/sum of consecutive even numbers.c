#include<stdio.h>
int main()
{
    int n,i,c=0,s=0;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        else
        {
            for(i=n;c!=5;i++)
            {
                if(i%2==0)
                {
                    s+=i;
                    c++;
                }
            }
            printf("%d\n",s);
            s=0;
            c=0;
        }
    }

    return 0;
}
