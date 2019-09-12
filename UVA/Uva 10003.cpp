#include<bits/stdc++.h>

using namespace std;

//int cuttingSticks(int cuts[100], int n, int Begin, int pivotIndex, int l)
//{
//    int minimum = 10000;
//    if(pivotIndex >= n)
//        return (l - cuts[pivotIndex]);
//    for(int index = Begin; index < pivotIndex; index++ )
//    {
//        minimum = min(minimum, cuttingSticks(cuts, n, Begin, index, l)+l)
//    }
//    for(int index = pivotIndex+1; index < n; index++ )
//    {
//        minimum = min(minimum, cuttingSticks(cuts, n, Begin, index, l-cuts[pivotIndex])+l)
//    }
//
//    return minimum;
//}

int main()
{
    int l;

    while(scanf("%d", &l) == 1 && l)
    {
        /// Input portion
        int n;
        int cuts[100];
        scanf("%d", &n);

        cuts[0] = 0;
        for(int index = 1; index <= n; index++)
        {
            scanf("%d", &cuts[index]);
        }

        cuts[n+1] = l;

        /// Initializing the table
        vector <vector < int > > table;

        table.resize(n+2);

        for(int index = 0; index <= n+1; index++)
            table[index].resize(n+2);


        for(int gap = 2; gap <= n+1; gap++)
        {
            for(int row = 0; row + gap <= n+1; row++)
            {
                int column = row + gap;
                int length = cuts[column] - cuts[row];
                int minimum = 1000000;
                for(int index = row + 1; index < column; index++)
                {
                    int cost = table[row][index] + table[index][column];
                    minimum = min(minimum, cost);
                }

                table[row][column] = length + minimum;
            }
        }

        /// Output of minimum cutting
        printf("The minimum cutting is %d.\n", table[0][n+1]);
    }




    return 0;
}
