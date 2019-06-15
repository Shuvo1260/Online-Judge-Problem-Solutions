#include<cstdio>
using namespace std;

int main()
{
    double Hour;
    double Minute;
    double Time_calculation;
    double Minute_calculation;
    double Degree_calculation;

    while(scanf("%lf:%lf", &Hour , &Minute) == 2)
    {
        if(Hour == 0 && Minute == 0)
            break;
        else
        {
            Time_calculation = ((Hour*30)+(Minute/2));
            Minute_calculation= Minute * 6;
            Degree_calculation = Time_calculation - Minute_calculation;

            if(Degree_calculation < 0)
                Degree_calculation *=(-1);
            if(Degree_calculation>180)
                Degree_calculation = 360 - Degree_calculation;

            printf("%.3lf\n", Degree_calculation);
        }
    }



    return 0;
}
