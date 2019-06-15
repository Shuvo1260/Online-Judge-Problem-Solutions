#include<cstdio>
#include<cstring>
int main()
{
    char number[1001];

    while(scanf("%s",number) ==1)
    {
        int len = strlen(number);
        if(number[0] == '0' && len == 1)
            break;
        else
        {
            int sum = 0;
            for(int index = 0; index < len; index++)
            {
                sum = sum * 10 + number[index]-'0';
                sum %=11;
            }
            if(!sum)
                printf("%s is a multiple of 11.\n",number);
            else
                printf("%s is not a multiple of 11.\n",number);
        }
    }



    return 0;
}
