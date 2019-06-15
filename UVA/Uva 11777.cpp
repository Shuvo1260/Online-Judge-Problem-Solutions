#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;


int main()
{
    int test;

    scanf("%d", &test);

    for(int Case = 1; Case <= test; Case++)
    {
        int term1, term2;
        int Final, attendance;
        int class_test[3];
        int ClassTest;

        scanf("%d%d%d%d", &term1, &term2, &Final, &attendance);
        for(int index = 0; index < 3; index++)
        {
            scanf("%d", &class_test[index]);
        }
        sort(class_test, class_test+3);

        ClassTest = (class_test[2] + class_test[1])/2;

        int result = term1 + term2 + Final + attendance + ClassTest;
        printf("Case %d: ",Case);
        if(result >= 90)
            printf("A\n");
        else if(result < 90 && result >= 80)
            printf("B\n");
        else if(result < 80 && result >= 70)
            printf("C\n");
        else if(result < 70 && result >= 60)
            printf("D\n");
        else
            printf("F\n");

    }

    return 0;
}
