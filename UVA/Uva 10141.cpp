#include<cstdio>
#include<cstring>

int main()
{
    int n;
    int r;
    int test = 1;
    while(scanf("%d%d", &n, &r) == 2 && n && r)
    {
        char line[100];
        scanf("\n");

        if(test != 1)
        {
            printf("\n");
        }


        for(int counter = 0; counter < n; counter++)
            gets(line);
        char temp[100];
        char answer[100];
        float value;
        int answer_req = -1;
        float require_value = 100000000;
        int require;

        for(int counter = 0; counter < r; counter++)
        {
            gets(temp);
            scanf("%f%d\n", &value, &require);

            if(require > answer_req)
            {
                answer_req = require;
                require_value = value;
                strcpy(answer, temp);
            }
            else if(require == answer_req && value < require_value)
            {
                answer_req = require;
                require_value = value;
                strcpy(answer, temp);
            }
            for(int index = 0; index < require; index++)
                gets(line);
        }
        printf("RFP #%d\n%s\n", test++, answer);
    }

    return 0;
}
