#include<stdio.h>
int d(int x)
{
    int y=0;
    while(x/10!=0)
    {
        x=x/10;
        y++;
    }
    return y;
}
int main()
{
    int i,j,k=1,input,matrix=1,y,m,a[100][100],c;
    while(scanf("%d",&input)!=EOF)
    {
        if(input==0)
            break;
        else if(input==1)
            printf("%d\n",input);
        else
        {
            k=1;
            matrix=1;
            for(i=0;i<input;i++)
            {
                j=0;
                matrix=k;
                a[i][j]=matrix;
                for(j=1;j<input;j++)
                {
                    matrix*=2;
                    a[i][j]=matrix;
                }

                k*=2;
            }
            y=d(a[input-1][input-1]);
            for(i=0;i<input;i++)
            {
               for(j=0;j<input;j++)
               {
                   m=d(a[i][j]);
                   m=y-m;
                   for(c=1;c<=m;c++)
                    printf(" ");
                   if(j==0)
                    printf("%d",a[i][j]);
                   else
                    printf(" %d",a[i][j]);
               }

               printf("\n");
            }
        }
        printf("\n");

    }
    return 0;
}
