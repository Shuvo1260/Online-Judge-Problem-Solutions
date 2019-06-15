#include<cstdio>

int gcd(int first, int second)
{
    int temp;

    while(second)
    {
        temp = second;
        second = first % second;
        first = temp;
    }
    return first;
}

int main()
{
    int number;

    while(scanf("%d", &number) == 1 && number)
    {
        int G=0;
        for(int i = 1; i < number; i++)
            for(int j = i+1; j <= number; j++)
            {
                G += gcd(i,j);
            }

        printf("%d\n", G);
    }


    return 0;
}
