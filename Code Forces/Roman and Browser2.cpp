#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int n,k;

    scanf("%d%d", &n, &k);

    int tabs[n];
    int closed_tabs[n];

    for(int index = 0; index < n; index++)
    {
        scanf("%d", &tabs[index]);
    }
    int maximum;
    maximum = 0;
    for(int b = 0; b < n-1; b++)
    {

        for(int index = 0; index < n; index++)
        {
            closed_tabs[index] = tabs[index];
        }

        for(int c = b; c < n; c+=k)
        {
            closed_tabs[c] = 0;
        }
        for(int c = b -k; c >= 0; c-=k)
        {
            closed_tabs[c] = 0;
        }

        int e = 0, s = 0;

        for(int index = 0; index < n; index++)
        {
            if(closed_tabs[index] == 1)
                e++;
            else if(closed_tabs[index] == -1)
                s++;
        }
        int result ;

        if(e > s)
            result = e - s;
        else
            result = s - e;

        if(maximum < result)
            maximum = result;
    }

    printf("%d\n", maximum);


    return 0;
}
