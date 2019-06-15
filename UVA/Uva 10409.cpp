#include<cstdio>
#include<cstring>


int main()
{
    int number;
    char command[7];

    while(scanf("%d", &number) == 1 && number)
    {
        getchar();
        int temp;
        int dice[6] = {1, 2, 6, 5, 3, 4};

        for(int counter = 0; counter < number; counter++)
        {
            scanf("%s",command);

            if(!strcmp(command,"south"))
            {
                temp = dice[0];
                dice[0] = dice[1];
                dice[1] = dice[2];
                dice[2] = dice[3];
                dice[3] = temp;
            }
            else if(!strcmp(command,"north"))
            {
                temp = dice[0];
                dice[0] = dice[3];
                dice[3] = dice[2];
                dice[2] = dice[1];
                dice[1] = temp;
            }
            else if(!strcmp(command,"east"))
            {
                temp = dice[0];
                dice[0] = dice[4];
                dice[4] = dice[2];
                dice[2] = dice[5];
                dice[5] = temp;
            }
            else if(!strcmp(command,"west"))
            {
                temp = dice[0];
                dice[0] = dice[5];
                dice[5] = dice[2];
                dice[2] = dice[4];
                dice[4] = temp;
            }
        }
        printf("%d\n", dice[0]);
    }


    return 0;
}
