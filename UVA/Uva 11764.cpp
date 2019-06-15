#include<cstdio>

int main()
{
    int test;

    scanf("%d",&test);

    for(int t=1; t<=test; t++)
    {
        int number;
        scanf("%d",&number);
        int wall[number];

        for(int index = 0; index < number; index++)
            scanf("%d",&wall[index]);

        int high = 0;
        int low = 0;

        for(int index = 1; index < number; index++)
        {
            if(wall[index] > wall[index-1])
                high++;
            else if(wall[index] < wall[index-1])
                low++;
        }

        printf("Case %d: %d %d\n",t,high,low);
    }

    return 0;
}

