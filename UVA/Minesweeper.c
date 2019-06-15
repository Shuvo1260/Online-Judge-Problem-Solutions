#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,i,j,counter=1;

    while(scanf("%d %d",&n,&m)==2)
    {
        char input[n][m];
        int result[500][500]={0};

       if(n==0&&m==0)
        break;
       else
       {
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    scanf("\n%c",&input[i][j]);
                }
            }
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if(input[i][j]=='*')
                        {
                            if(input[i][j-1]!='*'&&j-1>=0)
                                result[i][j-1]++;
                            if(input[i][j+1]!='*'&&j+1<m)
                                result[i][j+1]++;
                            if(input[i-1][j]!='*'&&i-1>=0)
                                result[i-1][j]++;
                            if(input[i+1][j]!='*'&&i+1<n)
                                result[i+1][j]++;
                            if(input[i-1][j-1]!='*'&&i-1>=0&&j-1>=0)
                                result[i-1][j-1]++;
                            if(input[i+1][j+1]!='*'&&i+1<n&&j+1<m)
                                result[i+1][j+1]++;
                            if(input[i-1][j+1]!='*'&&i-1>=0&&j+1<m)
                                result[i-1][j+1]++;
                            if(input[i+1][j-1]!='*'&&i+1<n&&j-1>=0)
                                result[i+1][j-1]++;

                        }
                }
            }
            if(counter!=1)
            printf("\n");
            printf("Field #%d:\n",counter);
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if(input[i][j]=='*')
                        printf("%c",input[i][j]);
                    else
                        printf("%d",result[i][j]);
                }
                printf("\n");
            }
       }
       counter++;

    }
    return 0;
}
