#include<cstdio>
#include<cstring>

void bubble_sort(int value[53], char character[53], int Elements_number)
{
    for(int line_counter = 0; line_counter < Elements_number - 1; line_counter++)
    {
        for(int index = 0; index < Elements_number-line_counter-1; index++)
        {
            if(value[index] < value[index+1])
            {
                int temporary_variable = value[index];
                value[index] = value[index+1];
                value[index+1] = temporary_variable;

                char temp = character[index];
                character[index] = character[index+1];
                character[index+1] = temp;
            }
        }
    }
}

int main()
{
    char line[10000];

    while(gets(line))
    {
        int len = strlen(line);

        if(len == 0)
            break;

        char character[53] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                              'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                              'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                              'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        int value[53] = {0};

        for(int index = 0; index < len; index++)
        {
            if(line[index] >= 'A' && line[index] <='Z')
                value[line[index] - 65]++;
            else if(line[index] >= 'a' && line[index] <='z')
                value[line[index] - 71]++;
        }
        bubble_sort(value, character, 52);

        for(int index = 0; value[index] == value[0]; index++)
            printf("%c", character[index]);
        printf(" %d\n", value[0]);


    }

    return 0;
}
