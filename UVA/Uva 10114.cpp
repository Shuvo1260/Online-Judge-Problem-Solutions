#include<cstdio>

int main()
{
    int duration;
    float down;
    float loan;
    int month;

    while(scanf("%d%f%f%d", &duration, &down, &loan, &month) == 4)
    {
        if(duration < 0)
            break;
        float depreciation[duration+1];

        for(int index = 0; index <= duration; index++)
            depreciation[index] = -1.0;

        int m;
        float value;

        for(int counter = 0; counter < month; counter++)
        {
            scanf("%d%f", &m, &value);
            depreciation[m] = value;
        }
        for(int index= 0; index <= duration; index++)
        {
            if(depreciation[index] == -1.0)
                depreciation[index] = depreciation[index-1];
        }

        float car = (loan + down) * (1.0 - depreciation[0]);
        float payment = loan / duration;

        if(loan < car)
            printf("0 months\n");
        else
        {
            int present_month = 1;

            while(true)
            {
                loan -= payment;
                car -= (car * depreciation[present_month]);

                if(loan < car)
                {
                    if(present_month == 1)
                        printf("1 month\n");
                    else
                        printf("%d months\n", present_month);
                    break;
                }
                present_month++;
            }
        }

    }


    return 0;
}
