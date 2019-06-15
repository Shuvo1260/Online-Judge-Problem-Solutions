#include<stdio.h>


int main()
{
    int a,b,c,d,h,m,n,o;

    scanf("%d%d%d%d",&a,&b,&c,&d);


    if(a==c)
    {
        if(b==d)
        {
            h=24;
            m=0;
        }
        else if(b<d)
        {
            h=24;
            m=d-b;
        }
        else
        {
            m=(60+d)-b;
            h=24-1;
        }


    }


    else if(a<c)
    {
        if(b>d)
        {
            m=(d+60)-b;
            h=c-(a+1);
        }
        else
        {
            m=d-b;
            h=c-a;
        }
    }


    else if(a>c)
    {
        if(b>d)
        {
            m=(d+60)-b;
            h=(24+c)-(a+1);
        }
        else
        {
            m=d-b;
            h=(24+c)-a;
        }
    }




    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
}
