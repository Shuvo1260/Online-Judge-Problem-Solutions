#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,t=0,c=0,r=0,s=0;
    int b;
    double g,h,j,m,n,o;
    char d;


    scanf("%d",&a);


    for(i=0;i<a;i++)
    {
        scanf("%d %c",&b,&d);
        t+=b;
        if(d=='C')
        {
            c+=b;
        }
        else if(d=='R')
        {
            r+=b;
        }
        else if(d=='S')
        {
            s+=b;
        }
    }
    m=c*100;
    n=r*100;
    o=s*100;
    g=m/t;
    h=n/t;
    j=o/t;

    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",t,c,r,s);
    printf("Percentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n",g,h,j);


    return 0;
}
