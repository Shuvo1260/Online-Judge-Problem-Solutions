#include<bits/stdc++.h>

using namespace std;


char result[50];

int toDecimal(char number[50], int len, int base)
{
    int result = 0;
    int power = 1;
    for(int index = len-1; index >= 0; index--, power *= base)
    {
        if(isdigit(number[index]))
            result += (number[index] - '0') * power;
        else
            result += (number[index] - 'A' + 10) * power;
    }
    return result;
}

int converter(int decimal, int base)
{
    int index = 0;
    int temp;

    while(decimal)
    {
        temp = decimal % base;
        decimal/= base;

        if(temp >= 10)
            result[index++] = temp + 'A' - 10;
        else
            result[index++] = temp + '0';
    }

    return index;

}

int main()
{
    char number[50];
    int base1;
    int base2;

    while(scanf("%s%d%d", number, &base1, &base2) == 3)
    {
        int len = strlen(number);

        int decimal = toDecimal(number, len, base1);

        if(decimal == 0)
        {
            printf("      0\n");
        }
        else
        {
            int index = converter(decimal, base2);

            if(index > 7)
            {
                printf("  ERROR\n");
            }
            else
            {
                for(int counter = index; counter <= 6; counter++)
                    printf(" ");
                for(int i = index-1; i >= 0; i--)
                    printf("%c",result[i]);
                printf("\n");
            }
        }
    }


    return 0;
}
