#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10],c[10]={"pedra"},d[10]={"papel"},e[10]={"tesoura"},f[10]={"lagarto"},g[10]={"Spock"};
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",&a);
        scanf("%s",&b);
        if(strcmp(a,b)==0)
            printf("Caso #%d: De novo!\n",i);
        else if((strcmp(a,e)==0)&&strcmp(b,d)==0)
            printf("Caso #%d: Bazinga!\n",i);
        else if((strcmp(a,d)==0)&&strcmp(b,c)==0)
            printf("Caso #%d: Bazinga!\n",i);
        else if((strcmp(a,c)==0)&&strcmp(b,f)==0)
            printf("Caso #%d: Bazinga!\n",i);
        else if((strcmp(a,f)==0)&&strcmp(b,g)==0)
            printf("Caso #%d: Bazinga!\n",i);
        else if((strcmp(a,g)==0)&&strcmp(b,e)==0)
            printf("Caso #%d: Bazinga!\n",i);
        else if((strcmp(a,e)==0)&&strcmp(b,f)==0)
            printf("Caso #%d: Bazinga!\n",i);
        else if((strcmp(a,f)==0)&&strcmp(b,d)==0)
            printf("Caso #%d: Bazinga!\n",i);
        else if((strcmp(a,d)==0)&&strcmp(b,g)==0)
            printf("Caso #%d: Bazinga!\n",i);
        else if((strcmp(a,g)==0)&&strcmp(b,c)==0)
            printf("Caso #%d: Bazinga!\n",i);
        else if((strcmp(a,c)==0)&&strcmp(b,e)==0)
            printf("Caso #%d: Bazinga!\n",i);

        else
            printf("Caso #%d: Raj trapaceou!\n",i);

    }
}
