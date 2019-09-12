#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n) == 1 && n)
    {
        int bits[n][n];

        for(int row = 0; row < n; row++)
        {
            for(int column = 0; column < n; column++)
            {
                scanf("%d", &bits[row][column]);
            }
        }

        int rowSum[n] = {0};
        int columnSum[n] = {0};

        /// Calculating sum of the rows and columns
        for(int row = 0; row < n; row++)
        {
            for(int column = 0; column < n; column++)
            {
                rowSum[row] += bits[row][column];
                columnSum[row] += bits[column][row];
            }
        }

        int rowCounter = 0;
        int columnCounter = 0;

        int changeBitRow;
        int changeBitColumn;

        /// Determining the number of error of rows and columns
        for(int index = 0; index < n; index++)
        {
            if(rowSum[index] % 2 != 0)
            {
                rowCounter++;
                changeBitRow = index+1;
            }
            if(columnSum[index] % 2 != 0)
            {
                columnCounter++;
                changeBitColumn = index+1;
            }

        }

        /// If there are no error then ok,
        /// if 1 error encountered then change bit position else corrupt
        if(!rowCounter && !columnCounter)
        {
            printf("OK\n");
        }
        else if(rowCounter == 1 && columnCounter == 1)
        {
            printf("Change bit (%d,%d)\n", changeBitRow, changeBitColumn);
        }
        else
        {
            printf("Corrupt\n");
        }
    }


    return 0;
}
