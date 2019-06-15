#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int main()
{
    char first[201];
    char second[201];

    int first_len;
    int second_len;
    int test;

    scanf("%d", &test);
    getchar();

    while( test--)
    {
        scanf("%s%s", first, second);
        first_len = strlen(first);
        second_len = strlen(second);
        int len = max(first_len, second_len);
        int sum[len + 1];
        int carry = 0;
        if(first_len > second_len)
        {
            for(int index = 0; index < first_len; index++)
            {
                if(index < second_len)
                 {
                     sum[index] = (first[index] - 48) + (second[index] - 48) + carry;
                     carry = sum[index] / 10;
                     sum[index] = sum[index] % 10;
                 }
                 else
                 {
                     sum[index] = (first[index] - 48) + carry;
                     carry = sum[index] / 10;
                     sum[index] = sum[index] % 10;
                 }
            }
            if(carry)
            {
                sum[first_len] = carry;
                len++;
            }

        }
        else
        {
            for(int index = 0; index < second_len; index++)
            {
                if(index < first_len)
                 {
                     sum[index] = (first[index] - 48) + (second[index] - 48) + carry;
                     carry = sum[index] / 10;
                     sum[index] = sum[index] % 10;
                 }
                 else
                 {
                     sum[index] = (second[index] - 48) + carry;
                     carry = sum[index] / 10;
                     sum[index] = sum[index] % 10;
                 }
            }
            if(carry)
            {
                sum[second_len] = carry;
                len++;
            }

        }

        bool flag = false;
        if(sum[0] != 0)
        {
            printf("%d", sum[0]);
            flag = true;
        }


        for(int index = 1; index < len; index++)
        {
            if(!sum[index] && flag)
                printf("%d",sum[index]);
            else if(sum[index])
            {
                printf("%d",sum[index]);
                flag = true;
            }
        }

        printf("\n");
    }


    return 0;
}

