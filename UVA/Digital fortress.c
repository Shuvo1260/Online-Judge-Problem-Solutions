#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char input[10005];
    int len,t,k;
    scanf("%d\n",&t);
    for(k=0;k<t;k++)
    {
        gets(input);
        len=strlen(input);
        int i,j,sq,c=0,pow;
        sq=sqrt(len);
        pow=sq*sq;
        if(pow==len)
        {
            char next[sq][sq];
            for(i=0;i<sq;i++)
                for(j=0;j<sq;j++)
                {
                    next[i][j]=input[c];
                    c++;
                }
            for(i=0;i<sq;i++)
                for(j=0;j<sq;j++)
                printf("%c",next[j][i]);
            printf("\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    return 0;
}
