#include<cstdio>
#include<cstring>

int main()
{
    char first[1000000];
    char second[1000000];

    int first_len;
    int second_len;

    int first_index;

    while(scanf("%s %s",&first,&second)== 2)
    {
        first_len = strlen(first);
        second_len = strlen(second);

        first_index = 0;

        for(int index = 0; index < second_len; index++)
        {
            if(first_index == first_len)
            {
                break;
            }
            else if(first[first_index] == second[index])
                first_index++;
        }
        if(first_index == first_len)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
