#include<bits/stdc++.h>

using namespace std;

void reverseNumber(char number[101], int len)
{
    for(int index = 0; index < len/2; index++)
    {
        char temp = number[index];
        number[index] = number[len-index-1];
        number[len-index-1] = temp;
    }
}

int main()
{
    char numbers[101][101];
    int len[101];
    int maxLen;

    int number_counter = 0;

    while(gets(numbers[number_counter]))
    {
        len[number_counter] = strlen(numbers[number_counter]);

        bool zeroFlag = true;
        for(int index = 0; index < len[number_counter]; index++)
        {
            if(numbers[number_counter][index] != '0')
            {
                zeroFlag = false;
                break;
            }
        }

        if(zeroFlag)
            break;

        reverseNumber(numbers[number_counter], len[number_counter]);
        maxLen = max(maxLen, len[number_counter++]);
    }

    int result[110];
    int carry = 0;
    for(int index = 0; index < maxLen; index++)
    {
        int sum = 0;
        for(int numberIndex = 0; numberIndex < number_counter; numberIndex++)
        {
            if(index< len[numberIndex])
                sum += numbers[numberIndex][index] - '0';
        }
        result[index] = sum + carry;
        carry = result[index]/10;
        result[index] %= 10;
    }
    int resultLen = maxLen;
    while(carry)
    {
        result[resultLen++] = carry % 10;
        carry /= 10;
    }
    bool zeroFlag = true;
    for(int index = resultLen-1; index >= 0; index--)
    {
        if(zeroFlag && result[index] != 0)
            zeroFlag = false;
        if(!zeroFlag)
        printf("%d", result[index]);
    }

    printf("\n");
    return 0;
}
