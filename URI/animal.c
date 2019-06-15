#include<stdio.h>
#include<string.h>

int main()
{
    char a[20]="vertebrado",b[20]="invertebrado";
    char c[20]="ave",d[20]="mamifero",e[20]="inseto",f[20]="anelideo";
    char g[20]="carnivoro",h[20]="onivoro",i[20]="herbivoro",j[20]="hematofago";
    char n1[20],n2[20],n3[20];
    gets(n1);
    gets(n2);
    gets(n3);
    if(0==strcmp(n1,a))
    {
        if(0==strcmp(n2,c))
        {
            if(0==strcmp(n3,g))
            {
                printf("aguia\n");
            }
            else if(0==strcmp(n3,h))
            {
                printf("pomba\n");
            }
        }
        else if(0==strcmp(n2,d))
        {
            if(0==strcmp(n3,h))
            {
                printf("homem\n");
            }
            else if(0==strcmp(n3,i))
            {
                printf("vaca\n");
            }
        }
    }
    else if(0==strcmp(n1,b))
    {
        if(0==strcmp(n2,e))
        {
            if(0==strcmp(n3,j))
            {
                printf("pulga\n");
            }
            else if(0==strcmp(n3,i))
            {
                printf("lagarta\n");
            }
        }
        else if(0==strcmp(n2,f))
        {
            if(0==strcmp(n3,j))
            {
                printf("sanguessuga\n");
            }
            else if(0==strcmp(n3,h))
            {
                printf("minhoca\n");
            }

        }
    }






    return 0;

}
