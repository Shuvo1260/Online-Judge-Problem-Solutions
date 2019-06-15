#include<cstdio>
#include<cstring>


int main()
{

    char a[20], b[20];

    int test;

    int m;

    scanf("%d", &test);

    for(int t = 1; t <= test; t++)
    {
        bool flag = true;

        scanf("%d", &m);
        getchar();

        for(int counter = 0; counter < m; counter++)
        {
            scanf("%s%s", a, b);

            if(strcmp(a,"wine") == 0)
            {
                flag = false;
            }
        }
        if(flag)
            printf("Case %d: Yes\n", t);
        else
            printf("Case %d: No\n", t);
    }

    return 0;
}
