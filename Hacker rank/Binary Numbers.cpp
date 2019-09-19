#include<bits/stdc++.h>

using namespace std;

int main()
{
    int number;

    scanf("%d", &number);

    int bit;
    int counter = 0;
    int maximum = 0;

    while(number)
    {
        bit = number % 2;
        number /= 2;
        if(bit == 1)
        {
            counter ++;
        }
        else
        {
            maximum = max(maximum, counter);
            counter = 0;
        }
    }
    maximum = max(maximum, counter);
    printf("%d\n", maximum);


    return 0;
}
