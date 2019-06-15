#include<stdio.h>

int main()
{
    int a,b,i,d,n,c,o,p;

    while(scanf("%d%d",&a,&b)==2)
    {
        c=0;

        o=a;
        p=b;

        if(a>b)
        {
            i=a;
            a=b;
            b=i;
        }
        for(i=a;i<=b;i++)
        {
            n=i;
            d=1;
            while(n!=1)
            {
               if(n%2!=0)
               {
                   n=3*n+1;
                   d++;
               }
               else
               {
                   n=n/2;
                   d++;
               }
            }
            if(d>c)
            {
                c=d;
            }
        }


        printf("%d %d %d\n",o,p,c);


    }
}
