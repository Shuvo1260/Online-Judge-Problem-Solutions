#include<cstdio>
#include<cstring>
#include<algorithm>

int main()
{
    char first[1001];
    char second[1001];

    while(scanf("%s%s",first, second) == 2)
    {
        int character[26] = {0};

        int len = strlen(first);
        int char_index;
        for(int index = 0; index < len; index++)
        {
            char_index = (int) first[index] - 97;
            character[char_index]++;
        }
        len = strlen(second);
        for(int index = 0; index < len; index++)
        {
            char_index = (int) second[index] - 97;
            character[char_index]--;
        }
        int counter = 0;
        for(int index = 0; index < 26; index++)
        {
            if(character[index] != 0)
                counter++;
        }
        printf("%d\n",abs(counter - len));


    }
    return 0;
}
