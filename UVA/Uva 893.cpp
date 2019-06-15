#include<cstdio>

bool leap_year(long int year)
{
    if(year % 400 == 0)
        return true;
    else if(year % 4 == 0 && year % 100 != 0)
        return true;
    else
        return false;
}

int main()
{
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    long int value;
    long int day;
    long int month;
    long int year;

    while(scanf("%ld%ld%ld%ld", &value, &day, &month, &year) == 4 && value && day && month && year)
    {
        long int result_year = year;
        long int result_day = value + day;
        long int result_month = 1;

        for(int counter = 1; counter < month; counter++)
        {
            result_day += months[counter-1];

            if(counter == 2 && leap_year(year))
                result_day++;
        }

        while(true)
        {
            if(!leap_year(result_year))
            {
                if(result_day > 365)
                {
                    result_year++;
                    result_day -= 365;
                }
                else
                    break;
            }
            else if(leap_year(result_year))
            {
                if(result_day > 366)
                {
                    result_year++;
                    result_day -= 366;
                }
                else
                    break;
            }
        }

        for(int counter = 0; ; counter++)
        {
            if(counter == 1)
            {
                if(leap_year(result_year) && result_day > 29)
                {
                    result_month++;
                    result_day -= 29;
                }
                else if( !leap_year(result_year) && result_day > 28)
                {
                    result_month++;
                    result_day -= 28;
                }
                else
                    break;

            }
            else if(result_day > months[counter])
            {
                result_month++;
                result_day -= months[counter];
            }
            else
                break;
        }
        if(!result_day)
            result_day++;
        printf("%ld %ld %ld\n", result_day, result_month, result_year);
    }


    return 0;
}
