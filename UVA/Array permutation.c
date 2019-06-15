#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,test,index[10000];
    char input[10000],in[1000][1000];
    scanf("%d\n",&test);
    for(i=0;i<test;i++)
    {
        if(i!=0)
        printf("\n");
        int value,len;
        scanf("\n");
        scanf(" %[^\n]",input);
        len=strlen(input);
        int m=0;
        for(j=0;j<len;j=k+1)
        {
            for(k=j;input[k]>='0'&&input[k]<='9';k++)
           {
               if(k==j)
               {
                    if(input[k]=='0')
                        value=0;
                    else if(input[k]=='1')
                        value=1;
                    else if(input[k]=='2')
                        value=2;
                    else if(input[k]=='3')
                        value=3;
                    else if(input[k]=='4')
                        value=4;
                    else if(input[k]=='5')
                        value=5;
                    else if(input[k]=='6')
                        value=6;
                    else if(input[k]=='7')
                        value=7;
                    else if(input[k]=='8')
                        value=8;
                    else if(input[k]=='9')
                        value=9;
               }
               else
               {
                   if(input[k]=='0')
                        value=(value*10)+0;
                    else if(input[k]=='1')
                        value=(value*10)+1;
                    else if(input[k]=='2')
                        value=(value*10)+2;
                    else if(input[k]=='3')
                        value=(value*10)+3;
                    else if(input[k]=='4')
                        value=(value*10)+4;
                    else if(input[k]=='5')
                        value=(value*10)+5;
                    else if(input[k]=='6')
                        value=(value*10)+6;
                    else if(input[k]=='7')
                        value=(value*10)+7;
                    else if(input[k]=='8')
                        value=(value*10)+8;
                    else if(input[k]=='9')
                        value=(value*10)+9;
               }
           }

           index[m]=value;
           m++;
           value=0;
        }
        for(j=0;j<m;j++)
            scanf("%s",&in[index[j]-1]);
        for(j=0;j<m;j++)
            printf("%s\n",in[j]);
    }
    return 0;
}
