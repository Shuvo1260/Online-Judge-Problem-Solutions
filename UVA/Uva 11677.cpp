#include<cstdio>
#include<cmath>

int main()
{
    int h1, h2;
    int m1, m2;

    while(scanf("%d%d%d%d", &h1, &m1, &h2, &m2) == 4)
    {
        if(!h1 && !m1 && !h2 && !m2)
            break;
        long int present_time = (h1 * 60) + m1;
        long int alarm_time = (h2 * 60) + m2;

        long int minute;

        if(alarm_time < present_time)
        {
            minute = (1440 - present_time) + alarm_time;
        }
        else
            minute = alarm_time - present_time;

        printf("%ld\n", minute);
    }

    return 0;
}


