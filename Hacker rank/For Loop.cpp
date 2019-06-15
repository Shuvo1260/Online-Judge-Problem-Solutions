#include <iostream>
#include <cstdio>
using namespace std;

void Print(int number)
{
    if(number == 1)
        printf("one\n");
    else if(number == 2)
        printf("two\n");
    else if(number == 3)
        printf("three\n");
    else if(number == 4)
        printf("four\n");
    else if(number == 5)
        printf("five\n");
    else if(number == 6)
        printf("six\n");
    else if(number == 7)
        printf("seven\n");
    else if(number == 8)
        printf("eight\n");
    else if(number == 9)
        printf("nine\n");
}

int main()
{
    int a;
    int b;

    scanf("%d%d", &a, &b);

    for(int number = a; number <= b; number++)
    {
        if(number <= 9)
            Print(number);
        else if(number > 9)
        {
            if(number % 2)
                printf("odd\n");
            else
                printf("even\n");
        }
    }



    return 0;
}
