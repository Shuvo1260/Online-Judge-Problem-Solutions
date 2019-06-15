#include<stdio.h>

int min(int value1, int value2)
{
    return (value1 > value2)? value2 : value1;
}



int main()
{
    int n;

    scanf("%d", &n);

    int len = n * 2 - 1;
    int value;
    int minimum;


    for(int row = 0; row < len; row++)
    {
        for(int column = 0; column < len; column++)
        {
            minimum = min(row, column);
            minimum = min(minimum, len - row - 1);
            minimum = min(minimum, len - column - 1);

            value = n - minimum;


            printf("%d ", value);
        }
        printf("\n");
    }

    return 0;
}
