#include<bits/stdc++.h>

int main()
{

    double pi = 2 * acos(0.0);
    double r;

    int Case;
    scanf("%d", &Case);

    for(int test = 1; test <= Case; test++)
    {
        scanf("%lf", &r);

        double square = 4 * r * r;
        double circle = pi * r * r;

        printf("Case %d: %.2lf\n", test, square - circle);
    }


    return 0;
}
