#include<stdio.h>
#include<string.h>
int main()
{
    char input[1000];
    int i,len,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        gets(input);
        len=strlen(input);
        for(i=len-1;i>=0;i--)
        {
            if((input[i]<='Z'&&input[i]>='A')||(input[i]<='z'&&input[i]>='a'))
                printf("%c",input[i]+3);
            else
                printf("%c",input[i]);
        }
        printf("\n");
    }
    return 0;
}
