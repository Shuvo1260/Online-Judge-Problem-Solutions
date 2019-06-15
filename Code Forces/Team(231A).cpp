#include<cstdio>

int main()
{
    int n;

    scanf("%d", &n);

    int solution = 0;

    for(int problem = 0; problem < n; problem++)
    {
        int friends[3];

        for(int index = 0; index < 3; index++)
            scanf("%d", &friends[index]);

        int counter = 0;

        for(int index = 0; index < 3; index++)
        {
            if(friends[index] == 1)
                counter++;
        }


        if(counter > 1)
            solution++;

    }

    printf("%d\n", solution);



    return 0;
}
