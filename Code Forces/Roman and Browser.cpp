#include<cstdio>
#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int n, k;

    scanf("%d%d", &n, &k);
    int tabs[n+1];

    for(int index = 1; index <= n; index++)
    {
        scanf("%d", &tabs[index]);
    }
    int maximum;
    int closed_tabs[n+1];

        maximum = 0;
    for(int b = 1; b < n; b++)
    {


        for(int index = 1; index <= n; index++)
            closed_tabs[index] = tabs[index];

        int e = 0, s = 0;
        int c;//cout << "B = " << b << endl;
        for(int c = b; c <= n; c+=k)
        {
            closed_tabs[c] = 0;
        }
        for(int c = b-k; c >= 1; c-=k)
        {
            closed_tabs[c] = 0;
        }

        for(int index = 1; index <= n; index++)
        {
            if(closed_tabs[index] == 1)
                e++;
            else if(closed_tabs[index] == -1)
                s++;cout << closed_tabs[index] << " " ;
        }cout << endl;
        int value = abs(e - s); cout << "Value: " << value << endl;;
        if(maximum < value)
        {
            maximum = value;
            cout << "max: " << maximum << endl;
        }
        cout << "B = " << b << " Max = " << maximum << endl;
    }

    printf("%d\n", maximum);

    return 0;
}
