#include<cstdio>

int main()
{
    int n;

    while(scanf("%d", &n) == 1)
    {
        long int hights[n];

        for(int index = 0; index < n; index++)
            scanf("%ld", &hights[index]);

        int q;
        scanf("%d", &q);

        long int query;

        for(int counter = 0; counter < q; counter++)
        {
            scanf("%ld", &query);

            long int small = -1;
            long int big = -1;

            int index;

            for(index = 0; index < n; index++)
            {
                if(hights[index] > query)
                {
                    big = hights[index];
                    break;
                }
            }
            for(int number = index-1; number >= 0; number--)
            {
                if(hights[number] < query)
                {
                    small = hights[number];
                    break;
                }
            }

            if(small == -1)
                printf("X ");
            else
                printf("%ld ", small);

            if(big == -1)
                printf("X\n");
            else
                printf("%ld\n", big);
        }
    }


    return 0;
}
