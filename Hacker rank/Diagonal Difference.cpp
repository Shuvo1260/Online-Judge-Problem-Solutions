#include<cstdio>
#include<cstdlib>

int main()
{
    int n;

    scanf("%d",&n);

    int data[n][n];

    for(int row = 0; row < n; row++)
        for(int column = 0; column < n; column++)
            scanf("%d",&data[row][column]);


    int first_diagonal = 0;

    for(int row = 0, column = 0; row < n; row++, column++)
        first_diagonal += data[row][column];

    int second_diagonal = 0;

    for(int row = 0, column = n-1; row < n; row++, column--)
        second_diagonal += data[row][column];

    int difference = abs(first_diagonal - second_diagonal);

    printf("%d\n",difference);

    return 0;
}


