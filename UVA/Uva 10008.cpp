#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    char text[1000];

    while(scanf("%d", &n) == 1)
    {
        char characters[26];
        int total_char = 26;
        for(int index = 0; index < total_char; index++)
        {
            characters[index] = index + 'A';
        }

        getchar();
        int char_counter[26] = {0};

        for(int counter = 0; counter < n; counter++)
        {

            gets(text);
            int len = strlen(text);

            for(int index = 0; index < len; index++)
            {
                if(text[index] >= 'A' && text[index] <= 'Z')
                    char_counter[text[index] - 'A']++;
                else if(text[index] >= 'a' && text[index] <= 'z')
                    char_counter[text[index] - 'a']++;
            }
        }

        for(int row = 0; row < total_char-1; row++)
        {
            for(int index = 0; index < total_char-row-1; index++)
            {
                if(char_counter[index] < char_counter[index+1])
                {
                    int temp = char_counter[index];
                    char_counter[index] = char_counter[index+1];
                    char_counter[index+1] = temp;

                    char temp_char = characters[index];
                    characters[index] = characters[index+1];
                    characters[index+1] = temp_char;
                }
            }
        }
        for(int index = 0; index < total_char; index++)
        {
            if(char_counter[index] == 0)
                break;
            else
            {
                printf("%c %d\n", characters[index], char_counter[index]);
            }
        }

    }


    return 0;
}
