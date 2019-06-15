#include<cstdio>
#include<cstring>

char converter(char character)
{
    if(character == '1')
        return 'I';
    else if(character == '2')
        return 'Z';
    else if(character == '3')
        return 'E';
    else if(character == '4')
        return 'A';
    else if(character == '5')
        return 'S';
    else if(character == '6')
        return 'G';
    else if(character == '7')
        return 'T';
    else if(character == '8')
        return 'B';
    else if(character == '9')
        return 'P';
    else if(character == '0')
        return 'O';
}

int main()
{
    int test;

    scanf("%d", &test);
    getchar();

    for(int t = 1; t <= test; t++)
    {
        char line[100];
        while(gets(line))
        {

            if(strlen(line) == 0)
                break;
            else
            {
                int len = strlen(line);

                for(int index = 0; index < len; index++)
                {
                    if(line[index] <= '9' && line[index] >= '0')
                    {
                        printf("%c", converter(line[index]));
                    }
                    else
                        printf("%c", line[index]);
                }
                printf("\n");
            }
        }
        if(t != test)
            printf("\n");
    }

    return 0;
}
