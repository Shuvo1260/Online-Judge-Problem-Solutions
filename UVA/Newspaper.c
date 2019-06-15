#include<stdio.h>
int main()
{
    long int test,chrnumber,chrprice[200],i,j,k,l,len,line;
    char pch[200],text[150000];
    double price;
    scanf("%ld",&test);
        for(i=0;i<test;i++)
        {
            price=0;
            scanf("%ld ",&chrnumber);
            for(j=0;j<chrnumber;j++)
            {
                scanf("%c %ld \n",&pch[j],&chrprice[j]);
            }
            scanf("%ld ",&line);
            for(l=0;l<line;l++)
            {
                gets(text);
                len=strlen(text);
                for(j=0;j<len;j++)
                    for(k=0;k<chrnumber;k++)
                    if(text[j]==pch[k])
                        price+=chrprice[k];
            }

            price/=100.0;
            printf("%.2lf$\n",price);
        }
}
