#include<cstdio>
#include<cmath>

int main()
{
    int test = 1;
    double number;

    while(scanf("%lf",&number) == 1)
    {
        if(number < 0)
            break;
        else
        {
            for(int counter = 0; counter < 15; counter++)
            {
                if(number <= pow(2,counter))
                {
                    printf("Case %d: %d\n", test++, counter);
                    break;
                }
            }
        }
    }

    return 0;
}
