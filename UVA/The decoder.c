#include<stdio.h>
#include<string.h>
int main()
{
    char input[100000];
    int i,len;
    while(gets(input))
    {
        len=strlen(input);
        for(i=0;i<len;i++)
        {
            printf("%c",input[i]-7);
        }
        printf("\n");
    }
    return 0;
}
