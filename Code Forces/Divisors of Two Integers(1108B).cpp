#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);
    long int data[n], temp[n];
    long int maximum = 0;
    for(int index = 0; index < n; index++)
    {
        scanf("%ld", &data[index]);
        if(maximum < data[index])
            maximum = data[index];
    }

    for(int number = 1; number <= maximum; number++)
    {
        if(maximum % number == 0)
        {
            for(int index = 0; index < n; index++)
            {
                if(data[index] == number)
                {
                    data[index] = -1;
                    break;
                }
            }
        }

    }

    long int maximumY = data[0];
    for(int index = 0; index < n; index++)
    {
        if(maximumY < data[index])
            maximumY = data[index];
    }

    printf("%ld %ld\n", maximum, maximumY);

    return 0;
}
