#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

void Copy(char to_copy[], char source[], int len)
{
    int copy_index = 0;
    for(int index = 0; index < len; index++)
    {
        if(source[index] != ' ')
            to_copy[copy_index++] = source[index];
    }
    to_copy[copy_index] = '\0';
}

int main()
{
    int test;

    scanf("%d", &test);
    getchar();

    for(int Case = 1; Case <= test; Case++)
    {
        char team_output[30];
        char judge_output[30];

        gets(team_output);
        gets(judge_output);

        int team_len = strlen(team_output);
        int judge_len = strlen(judge_output);

        if(strcmp(team_output, judge_output) == 0)
            printf("Case %d: Yes\n", Case);
        else
        {
            char team_temp[team_len];
            char judge_temp[judge_len];

            Copy(team_temp, team_output, team_len);
            Copy(judge_temp, judge_output, judge_len);

            if(strcmp(team_temp, judge_temp) == 0)
                printf("Case %d: Output Format Error\n", Case);
            else
                printf("Case %d: Wrong Answer\n", Case);

        }
    }



    return 0;
}
