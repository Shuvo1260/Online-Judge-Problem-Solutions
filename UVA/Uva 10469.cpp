#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    long long int first;
    long long int second;



    while(scanf("%lld%lld",&first, &second) == 2)
    {
        int first_binary[100] = {0};
        int second_binary[100] = {0};
        int first_index = 0;
        int second_index = 0;

        while(first)
        {
            first_binary[first_index++] = first % 2;
            first /= 2;
        }
        while(second)
        {
            second_binary[second_index++] = second % 2;
            second /= 2;
        }
        int len = max(first_index,second_index);
        int temp;
        int result = 1;
        int sum = 0;
        for(int index = 0; index < len; index++, result*=2)
        {
            temp = first_binary[index] + second_binary[index];
            if(temp > 1)
                temp = 0;
            if(temp)
                {
                    sum += result;
                }
        }

        printf("%d\n",sum);
    }



    return 0;
}
