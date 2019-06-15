#include<bits/stdc++.h>

using namespace std;

bool checker(char grid[3][3], char key)
{
    if(grid[0][0] == key && grid[0][1] == key && grid[0][2] == key)
        return false;

    if(grid[1][0] == key && grid[1][1] == key && grid[1][2] == key)
        return false;

    if(grid[2][0] == key && grid[2][1] == key && grid[2][2] == key)
        return false;

    if(grid[0][0] == key && grid[1][0] == key && grid[2][0] == key)
        return false;

    if(grid[0][1] == key && grid[1][1] == key && grid[2][1] == key)
        return false;

    if(grid[0][2] == key && grid[1][2] == key && grid[2][2] == key)
        return false;

    if(grid[0][0] == key && grid[1][1] == key && grid[2][2] == key)
        return false;

    if(grid[0][2] == key && grid[1][1] == key && grid[2][0] == key)
        return false;

    return true;
}

int main()
{
    int n;

    scanf("%d", &n);

    for(int Case = 0; Case < n; Case++)
    {
        //scanf("\n");
        getchar();
        int o_counter = 0;
        int x_counter = 0;

        char grid[3][3];

        for(int row = 0; row < 3; row++)
        {
            for(int column = 0; column < 3; column++)
            {
                scanf("%c", &grid[row][column]);

                if(grid[row][column] == 'X')
                    x_counter++;
                else if(grid[row][column] == 'O')
                    o_counter++;

            }

            getchar();
        }

        bool flag = true;


        if(x_counter == o_counter)
        {
            flag = checker(grid, 'X');
        }
        else if(o_counter+1 == x_counter)
        {
            flag = checker(grid, 'O');
        }
        else
        {
            flag = false;
        }

        if(flag)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}
