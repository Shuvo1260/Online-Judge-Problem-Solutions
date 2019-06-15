#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int n;

    scanf("%d", &n);


    int number = 1, counter = n;


    for(int digit = 1; digit <= 9 && digit < n; digit++)
    {
        if(n % digit == 0 && n / digit <= 9 && digit < counter && n/digit != n)
        {
            number = n / digit;
            counter = digit;
        }
    }


    printf("%d\n", counter);
    for(int index = 0; index < counter; index++)
    {
        if(index == counter - 1)
            printf("%d\n", number);
        else
            printf("%d ", number);
    }


    return 0;
}
