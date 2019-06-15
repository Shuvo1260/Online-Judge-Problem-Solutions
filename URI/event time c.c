#include<stdio.h>

int main()
{
    int d1,h1,m1,s1,d2,h2,m2,s2;
    int a,b,c,d,h,m,s;


    printf("Dia ");
    scanf("%d",&d1);
    scanf("%d : %d : %d",&h1,&m1,&s1);
    printf("Dia ");
    scanf("%d",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);

    a= (d1*86400) + (h1*3600) + (m1*60) + s1;
    b= (d2*86400) + (h2*3600) + (m1*60) + s2;
    c=b-a;
    printf("%d",c);
    if(c>=60)
    {
//        d=c/86400;
//        h=(c%86400)/3600;
//        m=((c%86400)%3600)/60;
//        s=((c%86400)%3600)%60;
        d = c/86400;
        h = (c%86400)/3600;
        m = ((c%86400)%3600)/60;
        s = ((c%86400)%3600)%60;

        printf("%d dia(s)\n",d);

        printf("%d hora(s)\n",h);

        printf("%d minuto(s)\n",m);

        printf("%d segundo(s)\n",s);

    }





    return 0;
}
