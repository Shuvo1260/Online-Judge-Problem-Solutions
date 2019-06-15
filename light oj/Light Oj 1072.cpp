#include<bits/stdc++.h>

int main()
{
    double R;
    int n;
    int Case;

    scanf("%d", &Case);

    for(int test = 1; test <= Case; test++)
    {
        scanf("%lf%d", &R, &n);
        double pi = acos(-1);
        double angle = sin(pi/n);
        double r = (angle * R) / (angle + 1);

        printf("Case %d: %.6lf\n", test, r);

    }


    return 0;
}
