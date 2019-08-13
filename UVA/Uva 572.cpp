#include<bits/stdc++.h>

using namespace std;

char graph[101][101];
int grid[101][101];

void setFlag(int row, int column, int counter)
{

    if(graph[row+1][column+1]== '@' && !grid[row+1][column+1] )
    {
        grid[row+1][column+1] = counter;
        setFlag(row+1, column+1, counter);
    }
    if(graph[row+1][column]== '@' && !grid[row+1][column] )
    {
        grid[row+1][column] = counter;
        setFlag(row+1, column, counter);
    }
    if(graph[row+1][column-1]== '@' && !grid[row+1][column-1] )
    {
        grid[row+1][column-1] = counter;
        setFlag(row+1, column-1, counter);
    }


    if(graph[row][column+1]== '@' && !grid[row][column+1] )
    {
        grid[row][column+1] = counter;
        setFlag(row, column+1, counter);
    }
    if(graph[row][column-1]== '@' && !grid[row][column-1] )
    {
        grid[row][column-1] = counter;
        setFlag(row, column-1, counter);
    }


    if(graph[row-1][column+1]== '@' && !grid[row-1][column+1] )
    {
        grid[row-1][column+1] = counter;
        setFlag(row-1, column+1, counter);
    }
    if(graph[row-1][column]== '@' && !grid[row-1][column] )
    {
        grid[row-1][column] = counter;
        setFlag(row-1, column, counter);
    }
    if(graph[row-1][column-1]== '@' && !grid[row-1][column-1] )
    {
        grid[row-1][column-1] = counter;
        setFlag(row-1, column-1, counter);
    }
}

int oilDepositer(int n, int m)
{
    int counter = 0;
    for(int row = 0; row < n; row++)
    {
        for(int column = 0; column < m; column++)
        {
            if(graph[row][column] == '@' && !grid[row][column])
            {
                counter++;
                grid[row][column] = counter;
                setFlag(row, column, counter);
            }
        }
    }

    return counter;
}

int main()
{
    int n, m;

    while(scanf("%d%d", &n, &m) == 2 && n && m)
    {
        getchar();
        for(int row = 0; row < n; row++)
        {
            for(int column = 0; column < m; column++)
            {
                scanf("%c", &graph[row][column]);
                if(graph[row][column] == '@')
                    grid[row][column] = 0;
                else
                    grid[row][column] = -1;
            }
            getchar();
        }

        int totalDeposits = oilDepositer(n, m);

        printf("%d\n", totalDeposits);


    }


    return 0;
}
