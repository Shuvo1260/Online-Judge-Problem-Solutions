#include<cstdio>

int main()
{
    int n;
    int test;
    int maximum;
    int element;
    scanf("%d",&test);

    for(int counter = 1; counter <= test; counter++)
    {
        maximum = 0;

        scanf("%d",&n);

        for(int index = 0; index < n; index++)
        {
            scanf("%d",&element);
            if(element > maximum)
                maximum = element;
        }

        printf("Case %d: %d\n", counter , maximum);
    }

    return 0;
}
