#include<cstdio>
#include<cstring>

int main()
{
    int test;

    scanf("%d", &test);

    for(int t = 1; t <= test; t++)
    {
        if(t > 1)
            printf("\n");
        int number;
        char c;
        scanf("%d%c", &number, &c);

        char line[501];
        printf("Case %d:\n", t);
        for(int counter = 0; counter < number; counter++)
        {
            gets(line);

            int len = strlen(line);
            for(int index = 0; index < len; index++)
            {
                if(line[index] == ' ')
                {
                    printf(" ");
                    while(line[index+1] == ' ' && index < len)
                        index++;
                }
                else
                    printf("%c",line[index]);
            }
            printf("\n");
        }
    }


    return 0;
}
