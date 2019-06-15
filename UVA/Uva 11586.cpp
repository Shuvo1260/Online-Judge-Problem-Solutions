#include<cstdio>
#include<cstring>

int main()
{
    int test;

    scanf("%d", &test);
    getchar();

    while(test--)
    {
        char line[1000];
        int counter[2] = {0};

        gets(line);

        int len = strlen(line);

        for(int index = 0; index < len; index++)
        {
            if(line[index] == 'M')
                counter[0]++;
            else if(line[index] == 'F')
                counter[1]++;
        }
        if(counter[0] == counter[1] && counter[0] != 1 && counter[1] != 1)
            printf("LOOP\n");
        else
            printf("NO LOOP\n");
    }


    return 0;
}
