#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n) == 1)
    {
        int sushi[n];
        int same_list[n] = {0};
        int sushi_list[n];
        int sushi_index = 0;

        for(int index = 0; index < n; index++)
        {
            scanf("%d", &sushi[index]);
            if(sushi[index] == sushi[index-1])
                sushi_list[index] = sushi_list[index-1] + 1;
            else
                sushi_list[index] = 1;
        }

        int maximum = 0;
        for(int index = 0; index < n; index++)
        {
            int com1 = 0;
            int com2 = 0;
            for(int temp_index = index - sushi_list[index]; temp_index >= 0; temp_index--)
            {
                if(sushi[index] == sushi[temp_index])
                    break;
                else
                    com1++;
            }
            for(int temp_index = index + 1; temp_index < n; temp_index++)
            {
                if(sushi[index] == sushi[temp_index])
                    break;
                else
                    com2++;
            }

            int min1 = min(sushi_list[index], com1);
            int min2 = min(sushi_list[index], com2);
            maximum = max(maximum, max(min1, min2));

//            cout << index << " " << sushi_list[index] << " " << com1 << " " << com2 << endl;
//            cout << maximum << endl;
        }


        printf("%d\n", 2 *maximum);
    }


    return 0;
}
