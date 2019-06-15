#include<stdio.h>

int main()
{
    double a,b,c;

    scanf("%lf",&a);

    if(a<=2000)
    {
        printf("Isento\n");
    }


    else if(a>=2000.01&&a<=3000)
    {
        c=a-2000;
        b=c*.08;
        printf("R$ %.2lf\n",b);
    }


    else if(a>3000&&a<=4500)
    {
        c=a-3000;
        b=(c*.18)+80;
        printf("R$ %.2lf\n",b);
    }


    else if(a>4500)
    {
        c=a-4500;
        b=(c*.28)+350;
        printf("R$ %.2lf\n",b);
    }


    return 0;
}
