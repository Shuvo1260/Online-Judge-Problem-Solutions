#include<bits/stdc++.h>

using namespace std;


int main()
{
    int test;
    int x, y;

    scanf("%d", &test);

    for(int Case = 1; Case <= test; Case++)
    {
        scanf("%d%d", &x, &y);

        int xy = x * y;
        int value;

        if(x == 1 || y == 1)
            value = xy;
        else if(x == 2 || y == 2)
        {
            int temp;
            if(x == 2)
                temp = y;
            else
                temp = x;

            if(temp % 4 == 1 || temp % 4 == 3)
                value = temp + 1;
            else if(temp % 4 == 2)
                value = temp + 2;
            else if(temp % 4 == 0)
                value = temp;
        }
        else if(xy % 2 == 0)
        {
            value = xy / 2;
        }
        else
        {
            value = (xy / 2) + 1;
        }


        printf("Case %d: %d\n", Case, value);
    }


    return 0;
}

