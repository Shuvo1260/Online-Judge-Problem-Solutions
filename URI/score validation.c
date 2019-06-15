#include<stdio.h>


int main()
{
    double a,b=0;
    int j=0;


    while(j!=2)
    {
        scanf("%lf",&a);
        if(a>=0&&a<=10)
        {
            b+=a;
            j++;
        }
        else
        {
            printf("nota invalida\n");
        }
    }


    b/=2;
    printf("media = %.2lf\n",b);

    return 0;
}
