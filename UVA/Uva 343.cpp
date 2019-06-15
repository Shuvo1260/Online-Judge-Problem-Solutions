#include<bits/stdc++.h>
using namespace std;

int converter(int number[100], int base, int len)
{
    int result = 0;
    int power = 1;

    for(int index = len-1; index >= 0; index--)
    {
        result += number[index] * power;
        power *= base;
    }


    return result;
}

int main()
{
    char first[100];
    char second[100];


    while(scanf("%s%s", first, second) == 2)
    {
        int len1 = strlen(first);
        int len2 = strlen(second);

        int highest1 = 1;
        int highest2 = 1;

        int first_integer[100];
        int second_integer[100];

        for(int index = 0; index < len1; index++)
        {
            if(isdigit(first[index]))
                first_integer[index] = first[index] - '0';
            else
                first_integer[index] = first[index] - 'A' + 10;
            highest1 = max(highest1, first_integer[index]);
        }
        for(int index = 0; index < len2; index++)
        {
            if(isdigit(second[index]))
                second_integer[index] = second[index] - '0';
            else
                second_integer[index] = second[index] - 'A' + 10;
            highest2 = max(highest2, second_integer[index]);
        }
        highest1++, highest2++;
        bool flag = false;

        for(int base1 = highest1; base1 <= 36; base1++)
        {
            for(int base2 = highest2; base2 <= 36; base2++)
            {
                if(converter(first_integer, base1, len1) == converter(second_integer, base2, len2))
                {
                    printf("%s (base %d) = %s (base %d)\n", first, base1, second, base2);
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
        }

        if(!flag)
            printf("%s is not equal to %s in any base 2..36\n", first, second);
    }



    return 0;
}
