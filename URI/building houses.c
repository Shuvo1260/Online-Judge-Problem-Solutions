#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f;
    while(scanf("%d",&a))
    {
        if(a==0)
            break;
        else
        {
            scanf("%d%d",&b,&c);
            d=a*b;
            e=(d*100)/c;
            f=pow(e,.5);
            printf("%d\n",f);
        }
    }
    return 0;
}

