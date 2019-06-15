#include<stdio.h>

int main()
{
    int a[6]={100,50,20,10,5,2};
    double b[6]={1.0,0.50,0.25,0.10,0.05,0.01};
    double m,g;
    int n,i,f[6],e[6],c,h;


    scanf("%lf",&m);


    n=m;
    g=m-n;

    for(i=0;i<6;i++)
    {
        e[i]=n/a[i];
        n=n%a[i];
    }


    g=g+n;
    c=g*100;


    for(i=0;i<6;i++)
    {
        h=b[i]*100;
        f[i]=c/h;
        c=c%h;
    }


    printf("NOTAS:\n");
    for(i=0;i<6;i++)
    {
        printf("%d nota(s) de R$ %d.00\n",e[i],a[i]);
    }


    printf("MOEDAS:\n");
    for(i=0;i<6;i++)
    {
        printf("%d moeda(s) de R$ %.2lf\n",f[i],b[i]);
    }



    return 0;
}
