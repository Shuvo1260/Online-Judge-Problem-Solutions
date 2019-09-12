#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> data[7];

    int number;

    /// Taking input 2D 6x6 order array
    for(int row = 0; row < 6; row++)
    {
        for(int column = 0; column < 6; column++)
        {
            cin >> number;
            data[row].push_back(number);
        }
    }
    int Max = -9999999;
    int sum;


    for(int row = 1; row < 5; row++)
    {
        for(int column = 1; column < 5; column++)
        {
            /// Calculating hourglass array sum
            sum = data[row][column]
                  + data[row-1][column]
                  + data[row +1][column]
                  + data[row-1][column-1]
                  + data[row-1][column+1]
                  + data[row+1][column-1]
                  + data[row+1][column+1];

            /// Finding maximum sum
            Max = max(Max, sum);
        }
    }

    cout << Max << endl;

    return 0;
}

