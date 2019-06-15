#include<stdio.h>
#include<string.h>
int main()
{
    char input[10000];
    int i,f,l,c;
    while(scanf("%s",&input)!=EOF)
    {
        f=0;
        l=0;
        int len;
        len=strlen(input);
        for(i=0;i<len;i++)
        {
            if(input[i]=='(')
            {
                f++;
                c=1;
            }

            else if(input[i]==')')
            {
                l++;
                if(c==1)
                    c=0;
            }

        }
        if(f==l&&c==0)
            printf("correct\n");
        else
            printf("incorrect\n");
    }
    return 0;
}
