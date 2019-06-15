#include<stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int values[n];

    for(int index = 0; index < n; index++)
        scanf("%d", &values[index]);
    for(int index = n-1; index >= 0; index--)
        printf("%d ", values[index]);
    printf("\n");


    return 0;
}
