#include<cstdio>

int main()
{
    int a;
    int b;
    int c;

    while(scanf("%d%d%d", &a, &b, &c) == 3)
    {
        if(a == b && b == c)
            printf("*\n");
        else if( a == b && b != c)
            printf("C\n");
        else if(a == c && b != c)
            printf("B\n");
        else
            printf("A\n");
    }

    return 0;
}
