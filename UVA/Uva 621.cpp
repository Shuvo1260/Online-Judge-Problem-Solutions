#include<cstdio>
#include<cstring>

int main()
{
    int test;
    scanf("%d", &test);

    char data[1000];

    while(test--)
    {
        scanf("%s",data);

        int len = strlen(data);

        if(!strcmp(data,"1") || !strcmp(data,"4") || !strcmp(data,"78"))
            printf("+\n");
        else if(data[len-2] == '3' && data[len-1] == '5')
            printf("-\n");
        else if(data[0] == '9' && data[len - 1] == '4')
            printf("*\n");
        else
            printf("?\n");
    }

    return 0;
}
