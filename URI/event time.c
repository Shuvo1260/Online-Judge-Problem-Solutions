#include<stdio.h>
#include<string.h>
int main()
{
    int bd,bh,bm,bs,a,b,c,d,i,e,f,g,j;
    char n[4],m[4];
    int ad,ah,am,as;
    scanf("%s",&n);
    scanf("%d\n",&bd);
    scanf("%d : %d : %d\n",&bh,&bm,&bs);
    scanf("%s",&m);
    scanf("%d\n",&ad);
    scanf("%d : %d : %d",&ah,&am,&as);

    a=((ad*86400)+(ah*3600)+(am*60)+as);
    b=((bd*86400)+(bh*3600)+(bm*60)+bs);

    c=a-b;
    d=c/86400;
    e=(c-(d*86400))/3600;
    f=(c-(d*86400)-(e*3600))/60;
    g=(c-(d*86400)-(e*3600)-(f*60));
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,e,f,g);

    return 0;
}

