#include<cstdio>
#include<cstring>

int main()
{
    char first[1000];
    char second[1000];

    int first_len;
    int second_len;

    while(scanf("%s%s", first, second) == 2)
    {
        first_len = strlen(first);
        second_len = strlen(second);

        int first_number[first_len];
        int second_number[second_len];

        for(int index = first_len-1, temp_index = 0; index >= 0 ; index--, temp_index++)
            first_number[temp_index] = first[index] - 48;
        for(int index = second_len-1, temp_index = 0; index >= 0 ; index--, temp_index++)
            second_number[temp_index] = second[index] - 48;

        int multi[2000];
        int result[2000] = {0};
        int temp;
        int len;

        for(int second_index = 0; second_index < second_len; second_index++)
        {
            int carry = 0;
            for(int first_index = 0; first_index < first_len; first_index++)
            {
                temp = first_number[first_index] * second_number[second_index] + carry;
                multi[first_index] = temp % 10;
                carry = temp / 10;
            }
            multi[first_len] = carry;

            int index;
            int temp_index;
            carry = 0;

            for(index = second_index, temp_index = 0; temp_index <= first_len; index++, temp_index++)
            {
                temp = result[index] + multi[temp_index] + carry;
                result[index] = temp % 10;
                carry = temp / 10;
            }
            len = index;

            if(carry)
            {
                result[len] = carry;
            }
        }

        bool flag = false;
        for(int index = len -1; index >= 0; index--)
        {
            if(!result[index] && flag)
                printf("%d",result[index]);
            else if(result[index])
            {
                printf("%d",result[index]);
                flag = true;
            }
            if(!result[index] && !flag && !index)
                printf("0");
        }
        printf("\n");
    }


    return 0;
}
