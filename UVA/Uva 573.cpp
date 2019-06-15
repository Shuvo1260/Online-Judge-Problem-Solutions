#include<cstdio>

int main()
{
    int h;
    int u;
    int d;
    int f;

    while(scanf("%d%d%d%d", &h, &u, &d, &f) == 4 && h)
    {
        float climbing_distance = (float) u;

        int day = 1;
        float initial_distance = 0.0;
        float energy = (float) (u * f) / 100;

        while(initial_distance <= h)
        {
            initial_distance += climbing_distance;

            if(climbing_distance > 0)
                climbing_distance -= energy;

            if(initial_distance > h)
                break;
            initial_distance -= d;


            if(initial_distance < 0)
                break;
            day++;
        }

        if(initial_distance >= h)
            printf("success on day %d\n", day);
        else
            printf("failure on day %d\n", day);
    }

    return 0;
}
