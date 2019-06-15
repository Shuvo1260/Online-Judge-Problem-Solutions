#include<cstdio>
#include<cmath>

int binary_one(int number)
{
    int counter = 0;

    while(number)
    {
        if(number%2 == 1)
            counter++;
        number /= 2;
    }
    return counter;
}

int main()
{
    int n;
    int m;
    scanf("%d",&n);
    for(; n--;)
    {
        scanf("%d", &m);
        printf("%d ", binary_one(m));
        int number = 0;
        for(int i = 0; m ; i++)
        {
            int temp = m % 10;
            m /= 10;
            number += temp * pow(16.0,i);
        }

        printf("%d\n", binary_one(number));
    }


    return 0;
}
