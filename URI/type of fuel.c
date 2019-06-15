#include<stdio.h>
int main()
{
    int a;
    int b=0,c=0,d=0;
    while(scanf("%d",&a)!=EOF)
    {
        if(a==1)
        {
            b++;
        }
        else if(a==2)
        {
            c++;
        }
        else if(a==3)
        {
            d++;
        }
        else if(a==4)
        {
            break;
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",b,c,d);
    return 0;
}
