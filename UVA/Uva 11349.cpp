#include<cstdio>

int main()
{
    int test;

    scanf("%d", &test);

    for(int t = 1; t <= test; t++)
    {
        getchar();
        int n;

        scanf("N = %d", &n);
        long long int matrix[n][n];
        bool flag = true;

        for(int row = 0; row < n; row++)
        {
            for(int column = 0; column < n; column++)
            {
                scanf("%lld", &matrix[row][column]);

                if(matrix[row][column] < 0)
                    flag = false;
            }
        }
        if(flag)
        {
            int len;
            if(n % 2 == 0)
                len = n/2;
            else
                len = (n / 2) + 1;
            for(int row = 0; row < len; row++)
            {
                for(int column = 0; column < n; column++)
                {
                    if(matrix[row][column] != matrix[n-1-row][n-1-column])
                    {
                        flag = false;
                        break;
                    }
                }
                if(!flag)
                    break;
            }
            if(flag)
            {
                printf("Test #%d: Symmetric.\n", t);
            }
            else
                printf("Test #%d: Non-symmetric.\n", t);
        }
        else
            printf("Test #%d: Non-symmetric.\n", t);

    }

    return 0;
}
