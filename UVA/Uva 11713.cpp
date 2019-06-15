#include<cstdio>
#include<cstring>
int main()
{
    int number;
    scanf("%d\n",&number);

    while(number--)
    {
        char first[100];
        char second[100];

        scanf("%s", first);
        scanf("%s", second);

        if(strlen(first) != strlen(second))
            printf("No\n");
        else
        {
            bool flag = true;
            for(int index = 0; index < strlen(first); index++)
            {
                if(first[index] != second[index])
                {
                    if(first[index] != 'a' && first[index] != 'e' && first[index] != 'i' && first[index] != 'o' && first[index] != 'u')
                    {
                        flag = false;
                        break;
                    }
                    else
                    {
                        if(second[index] == 'a' ||second[index] == 'e' ||second[index] == 'i' ||second[index] == 'o' ||second[index] == 'u')
                        {
                            flag = true;
                        }
                        else
                        {
                            flag = false;
                            break;
                        }
                    }
                }

            }
            if(flag)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }

    return 0;
}
