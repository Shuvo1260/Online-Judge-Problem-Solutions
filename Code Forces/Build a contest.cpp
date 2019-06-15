#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    long int n, m;

    scanf("%ld%ld", &n, &m);

    long problems[m];

    for(int index = 0; index < m; index++)
        scanf("%ld", &problems[index]);

    int problem_counter = 0;
    int problem_flag[n] ;

    for(int index = 0; index < n; index++)
        problem_flag[index] = true;

    int result[m];


    for(int counter = 0; ; counter++)
    {
        int index;
        for(index = 0; index <m; index++)
        {
            int temp = problems[index]-1;

            if(problem_flag[temp])
            {
                problem_counter++;
                problem_flag[temp] = false;
                problems[index] = 0;
            }

            if(problem_counter == n)
            {
                problem_counter = 0;
                result[index] = 1;
                problems[index] = 0;
                for(int flag_index = 0; flag_index < n; flag_index++)
                    problem_flag[flag_index] = true;
            }
            else
                result[index] = 0;
        }
        if(index == m)
            break;
    }


    for(int index = 0; index < m; index++)
        printf("%d", result[index]);
    printf("\n");

    return 0;
}
