#include<stdio.h>

int main()
{
    int a,x,y,i;
    double d;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d%d",&x,&y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            d=x/(y*1.00);
            printf("%.1lf\n",d);
        }
    }
    return 0;
}
