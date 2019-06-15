#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    char dic[10][10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    char input[10] ;
    int test;
    int len;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%s",input);
        int flag[10] = {0};
        int reminder[10] = {0};

        len = strlen(input);
        for(int index = 0; index < len ; index++)
        {
            for( int counter = 0; counter < 10 ; counter++)
            {
                if(input[index] != dic[counter][index])
                    flag[counter]++;
                if(input[index] == dic[counter][index])
                    reminder[counter]++;
                }

        }
        if(len == 3)
        {
            if(flag[0] == 1)
                printf("1\n");
            else if(flag[1] == 1)
                printf("2\n");
            else if(flag[5] == 1)
                printf("6\n");
            else if(flag[9] == 1)
                printf("10\n");
            else
            {
                if(reminder[0] == 3)
                    printf("1\n");
                else if(reminder[1] == 3)
                    printf("2\n");
                else if(reminder[5] == 3)
                    printf("6\n");
                else if(reminder[9] == 3)
                    printf("10\n");
            }
        }
        else if( len == 4)
        {
            if(flag[3] == 1)
                printf("4\n");
            else if(flag[4] == 1)
                printf("5\n");
            else if(flag[8] == 1)
                printf("9\n");
            else
            {
                if(reminder[3] == 4)
                    printf("4\n");
                else if(reminder[4] == 4)
                    printf("5\n");
                else if(reminder[8] == 4)
                    printf("9\n");
            }
        }
        else if(len == 5)
        {
            if(flag[2] == 1)
                printf("3\n");
            else if(flag[6] == 1)
                printf("7\n");
            else if(flag[7] == 1)
                printf("8\n");
            else
            {
                if(reminder[2] == 5)
                    printf("3\n");
                else if(reminder[6] == 5)
                    printf("7\n");
                else if(reminder[7] == 5)
                    printf("8\n");
            }
        }
    }


    return 0;
}
