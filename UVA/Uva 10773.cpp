#include<bits/stdc++.h>
using namespace std;

int main()
{
    double d;
    double u;
    double v;

    int test;

    scanf("%d", &test);

    for(int t = 1; t <= test; t++)
    {
        scanf("%lf%lf%lf", &d, &u, &v);

        if(u >= v || !u || !v)
            printf("Case %d: can't determine\n", t);
        else
        {
            double tmin = d/v;

            double alpha = acos(-(u)/v);
            double tmax = d/ (v * sin(alpha));

            printf("Case %d: %.3lf\n", t, tmax - tmin );
        }

    }

    return 0;
}
