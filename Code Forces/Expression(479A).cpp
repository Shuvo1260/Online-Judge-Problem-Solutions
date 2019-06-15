#include<cstdio>

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    int calculation[8];
    int len = 6;

    calculation[0] = a + b + c;
    calculation[1] = a * b * c;
    calculation[2] = a + b * c;
    calculation[3] = a * b + c;
    calculation[4] = a * (b + c);
    calculation[5] = (a + b) * c;

    for(int counter = 0; counter < len; counter++)
    {
        for(int index = 0; index < len - counter -1; index++)
        {
            if(calculation[index] < calculation[index+1])
            {
                calculation[index] = calculation[index] ^ calculation[index+1];
                calculation[index+1] = calculation[index] ^ calculation[index+1];
                calculation[index] = calculation[index] ^ calculation[index+1];
            }
        }
    }

    printf("%d\n", calculation[0]);

    return 0;
}
