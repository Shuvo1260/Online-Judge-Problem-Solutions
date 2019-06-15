#include<stdio.h>
int main()
{
    int a,b,x=0,i=0,c=0,d=0,e=0;
    while(x!=2)
    {
        scanf("%d%d",&a,&b);
        i++;
        x=0;
        if(a==b)
        {
            c++;
        }
        else if(a>b)
        {
            d++;
        }
        else if(a<b)
        {
            e++;
        }
        while(x!=1)
        {
            scanf("%d",&x);
            printf("Novo grenal (1-sim 2-nao)\n");

            if(x==2)
            {
                break;
            }
        }

    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",i,d,e,c);
    if(d==e)
    {
        printf("Não houve vencedor\n");
    }
    else if(d>e)
    {
        printf("Inter venceu mais\n");
    }
    else
    {
        printf("Gremio venceu mais\n");
    }
    return 0;
}
