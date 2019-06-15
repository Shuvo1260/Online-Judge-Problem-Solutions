#include<cstdio>
#include<cstring>

bool palindrome(char data[100])
{
    int length = strlen(data);

    int len = length / 2;
    if(length%2 != 0)
        len++;

    for(int index = 0; index < len; index++)
    {
        if(data[index] != data[length-1-index])
        {
            return false;
        }
    }

    return true;
}
bool mirror(char data[100])
{
    char character[] = {'A','E','H','I','J','L','M','O','S','T','U','V','W','X','Y','Z','1','2','3','5','8'};
    char Reverse[] = {'A','3','H','I','L','J','M','O','2','T','U','V','W','X','Y','5','1','S','E','Z','8'};

    int length = strlen(data);

    int len = length / 2;
    if(length%2 != 0)
        len++;

    for(int index = 0; index < len; index++)
    {
        int char_index = 0;
        for(char_index = 0; char_index < 21; char_index++)
        {
            if(data[index] == character[char_index])
            {
                if(data[length-1-index] != Reverse[char_index])
                {
                    return false;
                }
                break;
            }
        }


        if(char_index >= 21)
            return false;
    }
    return true;
}
int main()
{
    char data[100];

    while(scanf("%s", data) == 1)
    {
        bool palindrome_flag = palindrome(data);

        bool mirror_flag = mirror(data);


        if(palindrome_flag && mirror_flag)
            printf("%s -- is a mirrored palindrome.",data);
        else if(palindrome_flag && !mirror_flag)
            printf("%s -- is a regular palindrome.",data);
        else if(!palindrome_flag && mirror_flag)
            printf("%s -- is a mirrored string.",data);
        else
            printf("%s -- is not a palindrome.",data);

        printf("\n\n");
    }
    return 0;
}
