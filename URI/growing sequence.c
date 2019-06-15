#include<stdio.h>
int main()
{
    int i,a;
    while(scanf("%d",&a)!=EOF)
    {
        if(a==0)
        {
            break;
        }
        else
        {
           for(i=1;i<=a;i++)
           {
                if(i==a)
                {
                    printf("%d\n",i);
                }
                else
                {
                    printf("%d ",i);
                }
           }
        }

    }
    return 0;
}
