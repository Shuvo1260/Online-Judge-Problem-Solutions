#include<stdio.h>
#include<math.h>


int main()
{
    long long int a,b,c,d,e;
    while(scanf("%lld%lld%lld",&a,&b,&c)!=EOF)
    {
        if(a==0||b==0||c==0)
        {
            return 0;
        }
        else
        {
            if(a<b)
                {
                    d=a;
                    a=b;
                    b=d;
                }
            if(a<c)
                {
                    d=a;
                    a=c;
                    c=d;
                }
            d=a*a;
            e=pow(b,2)+pow(c,2);
            if(d==e)
                {
                     printf("right\n");
                }
            else
            {
                printf("wrong\n");
            }
        }

    }

}
