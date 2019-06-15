#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
        d=b-a;
    else
        d=a-b;
    if(b<c)
        e=c-b;
    else
        e=b-c;
    if((a>b&&b<c)||(a>b&&b==c))
        printf(":)\n");
    else if((a<b&&b>c)||(a<b&&b==c))
        printf(":(\n");
    else if((a<b&&b<c)&&(d>e))
        printf(":(\n");
    else if((a<b&&b<c)&&(d<e))
        printf(":)\n");
    else if((a>b&&b>c)&&(d>e))
        printf(":)\n");
    else if((a>b&&b>c)&&(d<e))
        printf(":(\n");
    else if(a==b&&b<c)
        printf(":)\n");
    else if(a==b&&b>c)
        printf(":(\n");
    return 0;

}
