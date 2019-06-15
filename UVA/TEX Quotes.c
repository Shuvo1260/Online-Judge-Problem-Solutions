#include<stdio.h>
#include<string.h>
int main()
{
    char input[100000];
    int i,len,c=0;
    while(gets(input))
    {
        len=strlen(input);
        for(i=0;i<len;i++)
        {
            if(input[i]==34&&c==0)
            {
                printf("``");
                c++;
            }
            else if(input[i]==34&&c==1)
            {
                printf("''");
                c=0;
            }
            else
            {
                printf("%c",input[i]);
            }
        }
        printf("\n");
    }

    return 0;

}
