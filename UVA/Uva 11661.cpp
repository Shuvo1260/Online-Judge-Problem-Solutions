#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;
int main()
{
    int length;

    while(scanf("%d", &length) == 1 && length)
    {
        scanf("\n");
        char road[length+1];

        scanf("%s", road);

        char dr[length];
        int distance[length];
        int minimum = length+1;
        bool flag = true;
        int len_index = 0;

        for(int index = 0; index < length; index++)
        {
            if(road[index] == 'Z')
            {
                flag = false;
                minimum = 0;
                break;
            }
            else if(road[index] != '.')
            {
                dr[len_index] = road[index];
                distance[len_index++] = index;
            }
        }

        if(flag)
        {
            for(int index = 1; index < len_index; index++)
            {
                if(dr[index] != dr[index-1])
                {
                    minimum = min(minimum, distance[index] - distance[index-1]);
                }
            }
        }

        printf("%d\n", minimum);
    }


    return 0;
}
