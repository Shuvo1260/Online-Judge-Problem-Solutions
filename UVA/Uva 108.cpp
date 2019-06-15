#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int number;

    while(scanf("%d\n",&number) == 1)
    {
        int data[number][number];
        int sum_table[number+1][number+1];
        int dynamic_programming[number+1];

        for(int row = 0; row < number; row++)
            for(int column = 0; column < number; column++)
                scanf("%d",&data[row][column]);

        for(int row = 0; row < number; row++)
        {
            sum_table[row][0] = 0;
            for(int column = 1; column < number+1; column++)
            {
                sum_table[row][column] = sum_table[row][column-1] + data[row][column-1];
            }
        }
        int answer = -16130;
        for(int counter = 0; counter < number; counter++)
        {
            for(int column = counter; column < number; column++)
            {
                dynamic_programming[0] = 0;
                for(int row = 0; row < number; row++)
                {
                    dynamic_programming[row+1] = max(sum_table[row][column+1]-sum_table[row][counter], sum_table[row][column+1]-sum_table[row][counter]+dynamic_programming[row]);
                    answer = max(dynamic_programming[row+1],answer);
                }
            }
        }

        printf("%d\n", answer);
    }

    return 0;
}
