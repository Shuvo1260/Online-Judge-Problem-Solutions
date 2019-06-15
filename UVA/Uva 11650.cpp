#include<cstdio>
#include<cmath>

int main()
{
    int test;

    scanf("%d", &test);

    while(test--)
    {
        int hour;
        int minute;

        scanf("%d:%d", &hour, &minute);

        if(minute == 0 && hour != 12)
            hour = 12-hour;
        else if (hour == 12 && minute > 0)
            hour--;
        else if(hour != 12)
            hour = 12-hour-1;

        if(minute != 30 && minute != 0)
        {
            minute = 60 - minute;
        }
        if(hour == 0)
            printf("12:");
        else if(hour < 10 && hour > 0)
            printf("0%d:", hour);
        else
            printf("%d:", hour);
        if(minute < 10)
            printf("0%d\n", minute);
        else
            printf("%d\n", minute);
    }

    return 0;
}



