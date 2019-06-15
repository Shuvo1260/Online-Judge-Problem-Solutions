#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>

int main()
{
    int test;

    scanf("%d",&test);

    while(test--)
    {
        int n;
        scanf("%d",&n);

        int elements[n];

        for(int index = 0; index < n; index++)
            scanf("%d", &elements[index]);

        for(int row = 0; row < n-1; row++)
        {
            for(int column = 0; column < n-row-1; column++)
            {
                if(elements[column] > elements[column+1])
                {
                    int temp = elements[column];
                    elements[column] = elements[column+1];
                    elements[column+1] = temp;
                }
            }
        }

        int distance = 0;
        for(int index = 0; index < n; index++)
        {
            distance += abs(elements[n/2] - elements[index]);
        }

        printf("%d\n",distance);

    }

    return 0;
}

