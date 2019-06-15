#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int n;

    while(scanf("%d", &n) == 1)
    {

        int books[n];

        for(int index = 0; index < n; index++)
            scanf("%d", &books[index]);

        int money;

        scanf("%d", &money);

        sort(books, books+n);

        int i= 0, j= 0;
        int min_distance = money+1;
        int distance;

        for(int first_index = 0; first_index < n-1; first_index++)
        {
            for(int second_index = first_index; second_index < n; second_index++)
            {
                if(books[second_index] + books[first_index] == money)
                {
                    distance = books[second_index] - books[first_index];
                    if(min_distance > distance)
                    {
                        i = books[first_index];
                        j = books[second_index];
                        min_distance = distance;
                    }
                }
            }
        }

        printf("Peter should buy books whose prices are %d and %d.\n\n", i, j);

        scanf("\n");
    }


    return 0;
}
