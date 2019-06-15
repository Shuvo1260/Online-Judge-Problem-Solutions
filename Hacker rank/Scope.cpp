#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n) == 1)
    {
        int data[n];
        for(int index = 0; index < n; index++)
        {
            scanf("%d", &data[index]);
        }

        int difference;

        int max_difference = 0;

        for(int counter = 0; counter < n-1; counter++)
        {
            for(int index = counter+1; index < n; index++)
            {
                difference = abs(data[counter] - data[index]);

                max_difference = max(max_difference, difference);
            }
        }

        printf("%d\n", max_difference);
    }



    return 0;
}
