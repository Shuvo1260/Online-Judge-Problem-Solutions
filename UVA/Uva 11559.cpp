#include<cstdio>

int main()
{
    int n;
    int b;
    int h;
    int w;

    while(scanf("%d%d%d%d", &n, &b, &h, &w) == 4)
    {
        long int min_cost = b+1;
        for(int counter = 0; counter < h; counter++)
        {
            int price;
            scanf("%d", &price);

            int bed;
            int flag = false;
            long int result = b+1;
            for(int week = 0; week < w; week++)
            {
                scanf("%d", &bed);
                if(bed >= n)
                {
                    result = price * n;
                }
            }

            if(result <= b && result < min_cost)
                min_cost = result;
        }
        if(min_cost <= b)
        printf("%ld\n", min_cost);
        else
            printf("stay home\n");
    }


    return 0;
}
