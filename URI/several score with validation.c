#include<stdio.h>
int main()
{
    double a,b=0,c;
    int i=0,x=0;


    while(i!=2)
    {
        scanf("%lf",&a);
        if(a>=0&&a<=10)
        {
            x=0;
            b+=a;
            i++;
            if(i==2)
            {
                c=b/2;
                printf("media = %.2lf\n",c);
                b=0;
            while(x!=1)
            {
                i=0;
                scanf("%d",&x);
                if(x==2)
                {
                    printf("novo calculo (1-sim 2-nao)\n");
                    i=2;
                    return 0;
                }
                else if(x==1)
                {
                    printf("novo calculo (1-sim 2-nao)\n");

                }
                else
                {
                    printf("novo calculo (1-sim 2-nao)\n");
                }
            }
            }
        }
        else
        {
            printf("nota invalida\n");
        }



    }
    return 0;

}
