#include<cstdio>
#include<cstring>

double integer_coverter(char data[], int len)
{
    double number = data[0] - 48;
    int index = 1;

    while(index < len)
    {
        number *= 10.0;
        number += (data[index++] - 48);
    }

    return number;
}

int main()
{
    char data[1000];
    char first[1000];
    char second[1000];


    while(gets(data))
    {
        puts(data);

        int len = strlen(data);
        int first_index = 0;
        int second_index = 0;

        for(int index = 0; index < len; index++)
        {
            if(data[index] == ' ')
                break;
            else
                first[first_index++] = data[index];
        }
        int temp_len = first_index;
        bool flag;

        while(temp_len < len)
        {
            if(data[temp_len] == '+')
            {
                flag = true;
                break;
                temp_len++;
            }
            else if(data[temp_len] == '*')
            {
                flag = false;
                break;
                temp_len++;
            }
            temp_len++;
        }

        for(int index = temp_len; index < len; index++)
        {
            if(data[index] >= '0' && data[index] <= '9')
                second[second_index++] = data[index];
        }

        double first_number = integer_coverter(first, first_index);
        double second_number = integer_coverter(second, second_index);

        if(first_number > 2147483647)
            printf("first number too big\n");
        if(second_number > 2147483647)
            printf("second number too big\n");


        if(flag && first_number + second_number > 2147483647)
        {
            printf("result too big\n");
        }
        else if( !flag && first_number * second_number > 2147483647)
        {

                printf("result too big\n");
        }

    }

    return 0;
}
