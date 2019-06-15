
#include<bits/stdc++.h>

int main()
{
    int Case;

    scanf("%d", &Case);

    for(int test = 1; test <= Case; test++)
    {
        int x1, x2, y1, y2;
        int query;
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        scanf("%d", &query);
        printf("Case %d:\n", test);
        int x, y;

        for(int counter = 0; counter < query; counter++)
        {
            scanf("%d%d", &x, &y);
            if(x>= x1 && y >= y1 && x <= x2 && y <= y2)
                printf("Yes\n");
            else
                printf("No\n");
        }

    }


    return 0;
}
