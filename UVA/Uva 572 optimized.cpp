#include<bits/stdc++.h>

using namespace std;

char graph[101][101];
int n, m;

void floodFill(int row, int column)
{
    if(row > n || column > m || row < 0 || column < 0)
        return;
    if(graph[row][column] != '@')
        return;

    graph[row][column] = '*';
    floodFill(row+1, column+1);
    floodFill(row+1, column);
    floodFill(row+1, column-1);
    floodFill(row, column+1);
    floodFill(row, column-1);
    floodFill(row-1, column+1);
    floodFill(row-1, column);
    floodFill(row-1, column-1);

}

int oilDepositer(int n, int m)
{
    int counter = 0;
    for(int row = 0; row < n; row++)
    {
        for(int column = 0; column < m; column++)
        {
            if(graph[row][column] == '@')
            {
                counter++;
                floodFill(row, column);
            }
        }
    }

    return counter;
}

int main()
{

    while(scanf("%d%d", &n, &m) == 2 && n && m)
    {
        getchar();
        for(int row = 0; row < n; row++)
        {
            for(int column = 0; column < m; column++)
            {
                scanf("%c", &graph[row][column]);
            }
            getchar();
        }

        int totalDeposits = oilDepositer(n, m);

        printf("%d\n", totalDeposits);


    }


    return 0;
}


