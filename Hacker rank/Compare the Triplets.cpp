#include<cstdio>

int main()
{
    int a[3];
    int b[3];

    for(int index = 0; index < 3; index++)
        scanf("%d", &a[index]);
    for(int index = 0; index < 3; index++)
        scanf("%d", &b[index]);

    int a_score = 0;
    int b_score = 0;

    for(int index = 0; index < 3; index++)
    {
        if(a[index] > b[index])
            a_score++;
        else if(a[index] < b[index])
            b_score++;
    }

    printf("%d %d\n",a_score, b_score);


    return 0;
}
