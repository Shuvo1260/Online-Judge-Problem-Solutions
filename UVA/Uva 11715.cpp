#include<cstdio>
#include<cmath>

int main()
{
    int number;

    float value1, value2, value3, result1, result2;

    for(int Case = 1;scanf("%d", &number) == 1 && number; Case++)
    {
        scanf("%f%f%f", &value1, &value2, &value3);
        if(number == 1)
        {
            result2 = (value2 - value1) / value3;
            result1 = ((value1 + value2) * value3)/ 2;
        }
        else if(number == 2)
        {
            result2 = (value2 - value1) / value3;
            result1 = ((value1 + value2) * result2)/ 2;
        }
        else if(number == 3)
        {
            result1 = sqrt((value1 * value1) + (2 * value2 * value3));
            result2 = (result1 - value1) / value2;
        }
        else if(number == 4)
        {
            result1 = sqrt((value1 * value1) - (2 * value2 * value3));
            result2 = ( value1 - result1) / value2;
        }

        printf("Case %d: %.3f %.3f\n", Case, result1, result2);
    }



    return 0;
}
