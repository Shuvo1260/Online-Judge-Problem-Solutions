#include<cstdio>
#include<cstring>

int main()
{
    int test;

    scanf("%d", &test);

    for(int index = 0; index < test; index++)
    {
        int n;
        char command[10];
        char command_list[100][10];
        int position = 0;
        int same_as;
        scanf("%d", &n);
        getchar();
        for(int counter = 0; counter < n; counter++)
        {
            scanf("%s", command);


            if(!strcmp(command, "SAME"))
            {
                scanf("%s%d", command, &same_as);
                strcpy(command, command_list[same_as-1]);
            }

            if(!strcmp(command, "LEFT"))
            {
                position--;
                strcpy(command_list[counter], command);
            }
            else if(!strcmp(command, "RIGHT"))
            {
                position++;
                strcpy(command_list[counter], command);
            }

        }

        printf("%d\n", position);
    }

    return 0;
}
