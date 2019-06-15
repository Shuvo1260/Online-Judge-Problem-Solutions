#include<cstdio>
#include<cstring>

int main()
{
    int test;

    scanf("%d", &test);

    for(int t = 1; t <= test; t++)
    {
        char url[10][101];
        int number[10];

        for(int index = 0; index < 10; index++)
        {
            scanf("%s%d", url[index], &number[index]);
        }

        char temp_url[101];
        int temp;

        for(int counter = 0; counter < 9; counter++)
        {
            for(int index = 0; index < 9 - counter; index++)
            {
                if(number[index] < number[index+1])
                {
                    temp = number[index];
                    number[index] = number[index+1];
                    number[index+1] = temp;

                    strcpy(temp_url,url[index]);
                    strcpy(url[index], url[index+1]);
                    strcpy(url[index+1], url[index]);
                }
            }
        }
        printf("Case #%d:\n", t);
        printf("%s\n", url[0]);

        for(int index = 1; number[index] == number[index-1]; index++)
            printf("%s\n", url[index]);
    }

    return 0;
}
