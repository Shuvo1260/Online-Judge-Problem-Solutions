#include<cstdio>
#include<cstring>

int value(char data[30])
{
    int len = strlen(data);

    int sum = 0;

    for(int index = 0; index < len; index++)
    {
        if(data[index] >= 'A' && data[index] <= 'Z')
            sum += data[index] - 64;
        else if(data[index] >= 'a' && data[index] <= 'z')
            sum += data[index] - 96;
    }

    return sum;
}

int single_value(int number)
{
    while(number/10 != 0)
    {
        int sum = 0;
        int temp = number;
        while(temp)
        {
            sum += temp % 10;
            temp /= 10;
        }
        number = sum;
    }
    return number;
}

int main()
{
    char first[30];
    char second[30];

    while(gets(first))
    {

        gets(second);
        int first_sum = value(first);
        int second_sum = value(second);

        int first_one = single_value(first_sum);
        int second_one = single_value(second_sum);

        float result;

        if(first_one < second_one)
            result = (float) first_one / second_one * 100;
        else
            result = (float) second_one / first_one * 100;

        printf("%.2f %%\n", result);
    }
    return 0;
}

