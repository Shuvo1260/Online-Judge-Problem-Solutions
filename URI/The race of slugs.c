#include<stdio.h>
int main()
{
    int input,a=0,b,i;
    while(scanf("%d",&input)!=EOF)
    {
        a=0;
        for(i=0;i<input;i++)
        {
            scanf("%d",&b);
            if(b>a)
                a=b;
        }
        if(a<10)
            printf("1\n");
        else if(a>=10&&a<20)
            printf("2\n");
        else if(a>=20)
            printf("3\n");
    }
    return 0;
}
