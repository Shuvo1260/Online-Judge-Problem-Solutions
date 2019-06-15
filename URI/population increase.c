#include<stdio.h>
int main()
{
    int a,b,n,i,j=0;
    double c,d,e,f;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%lf%lf",&a,&b,&c,&d);
        j=0;
        while(a<=b)
        {
            e=(c*a)/100;
            f=(d*b)/100;
            a+=e;
            b+=f;
            j++;
            if(j>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(j<=100)
            {
                printf("%d anos.\n",j);
            }
    }
    return 0;
}
