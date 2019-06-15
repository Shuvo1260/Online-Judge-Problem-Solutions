#include<cstdio>

int main()
{
    int test;

    scanf("%d", &test);

    for(int t = 1; t <= test; t++)
    {
        int number;

        scanf("%d", &number);
        int value;
        int answer;

        for(int index = 0; index < number; index++)
        {
            scanf("%d", &value);
            if(index == number/2)
                answer = value;
        }

        printf("Case %d: %d\n", t, answer);
    }


    return 0;
}
