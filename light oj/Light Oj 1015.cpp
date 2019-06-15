#include<cstdio>

int main()
{

    int Case;

    scanf("%d", &Case);

    for(int test = 1; test <= Case; test++)
    {
        getchar();
        int n;
        scanf("%d", &n);

        int dust;
        unsigned long long total_dust = 0;
        for(int index = 0; index < n; index++)
        {
            scanf("%d", &dust);
            if(dust > 0)
            total_dust += dust;
        }

        printf("Case %d: %llu\n", test, total_dust);
    }


    return 0;
}
