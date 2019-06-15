#include<cstdio>

int main()
{
    int test;

    scanf("%d", &test);

    while(test--)
    {
        int number;
        scanf("%d", &number);

        int a[number];

        for(int index = 0; index < number; index++)
        {
            scanf("%d", &a[index]);
        }

        int counter =  0;

        for(int b = 1; b < number; b++)
        {
            for(int index = b-1; index >= 0; index--)
            {
                if(a[b] >= a[index])
                    counter++;
            }
        }

        printf("%d\n", counter);
    }


    return 0;
}
