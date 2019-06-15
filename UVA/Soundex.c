#include<stdio.h>
#include<string.h>
int main()
{
    char input[100];
    int i,j,len;
    while(scanf("%s",&input)!=EOF)
    {
        len=strlen(input);
        int a=0,b=0,c=0,d=0,e=0,f=0,counter=0;
        for(i=0;i<len;i++)
        {
            if(input[i]==input[i-1]&&i!=0)
                counter=1;
            if(counter!=1)
            {
                if((input[i]=='B'||input[i]=='F'||input[i]=='P'||input[i]=='V')&&a!=1)
            {
                printf("1");
                a=1,b=0,c=0,d=0,e=0,f=0;
            }

            else if((input[i]=='C'||input[i]=='G'||input[i]=='J'||input[i]=='K'||input[i]=='Q'||input[i]=='S'||input[i]=='X'||input[i]=='Z')&&b!=1)
            {
                printf("2");
                a=0,b=1,c=0,d=0,e=0,f=0;
            }

            else if((input[i]=='D'||input[i]=='T')&&c!=1)
            {
                printf("3");
                a=0,b=0,c=1,d=0,e=0,f=0;
            }

            else if((input[i]=='L')&&d!=1)
            {
                printf("4");
                a=0,b=0,c=0,d=1,e=0,f=0;
            }

            else if((input[i]=='M'||input[i]=='N')&&e!=1)
            {
                printf("5");
                a=0,b=0,c=0,d=0,e=1,f=0;
            }

            else if((input[i]=='R')&&f!=1)
            {
                printf("6");
                a=0,b=0,c=0,d=0,e=0,f=1;
            }
            else
                a=0,b=0,c=0,d=0,e=0,f=0;
            }
            counter=0;

        }
        printf("\n");
    }
    return 0;
}
